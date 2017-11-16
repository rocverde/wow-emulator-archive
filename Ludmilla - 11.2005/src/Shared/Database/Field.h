// (c) Abyss Group
// (c) NAWE Group

#if !defined(FIELD_H)
#define FIELD_H

class Field
{
    public:
        //! Contains general datatypes that native datatypes can be converted into.
        enum DataTypes
        {
            DB_TYPE_UNKNOWN = 0x00,
            DB_TYPE_STRING  = 0x01,
            DB_TYPE_INTEGER = 0x02,
            DB_TYPE_FLOAT   = 0x03
        };
        // no DB_TYPE_BOOLEAN for now, it will be a 1/0 integer

        Field();
        Field(Field &f);
        Field(const char *value, const char *name, enum DataTypes type);

        ~Field();

        const char *GetName() const { return mName; }
        enum DataTypes GetType() const { return mType; }

        const char *GetString() const { return mValue; }
        float GetFloat() const { return mValue ? static_cast<float>(atof(mValue)) : 0; }
        bool GetBool() const { return mValue ? atoi(mValue) > 0 : false; }
        uint8 GetUInt8() const { return mValue ? static_cast<uint8>(atol(mValue)) : 0; }
        uint16 GetUInt16() const { return mValue ? static_cast<uint16>(atol(mValue)) : 0; }
        uint32 GetUInt32() const { return mValue ? static_cast<uint32>(atol(mValue)) : 0; }
        uint64 GetUInt64() const
        {
            if(mValue)
            {
                uint64 value;
                sscanf(mValue,I64FMTD,&value);
                return value;
            }
            else
                return 0;
        }

        void SetName(const char *name);
        void SetType(enum DataTypes type) { mType = type; }

        void SetValue(const char *value);

    private:
        char *mValue;
        char *mName;
        enum DataTypes mType;
};

#endif
