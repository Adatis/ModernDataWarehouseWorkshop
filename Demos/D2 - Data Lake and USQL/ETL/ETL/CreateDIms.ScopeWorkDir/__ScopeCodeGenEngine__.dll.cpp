#pragma warning( disable : 4100 )
#pragma warning( disable : 4127 )
#pragma warning( disable : 4189 )
#pragma warning( disable : 4355 )
#pragma warning( disable : 4503 )
#pragma warning( disable : 4505 )
#pragma warning( disable : 4512 )
#pragma warning( disable:  4651 )
#pragma warning( disable : 4691 )
#pragma warning( disable : 4723 )
#pragma warning( disable : 4702 )
#define SCOPE_NO_UDT
#if defined(COMPILE_NATIVE)
#include "ScopeCommonError.h"
#include "ScopeError.h"
#include "ScopeOperators.h"
#endif
#if defined(COMPILE_MANAGED)
#using <mscorlib.dll>
[assembly: System::Runtime::Versioning::TargetFrameworkAttribute(".NETFramework,Version=v4.5", FrameworkDisplayName = ".NET Framework, Version 4.5")];
#include "ScopeCommonError.h"
#include "SqlManaged.h"
#endif
#if defined(COMPILE_NATIVE)
#endif
using namespace ScopeEngine;
static ScopeEngine::CompilerSettings GetCompilerSettings()
{
    static ScopeEngine::CompilerSettings settings;
    settings.m_restrictOperatorMemorySpilling = false;
    settings.m_verboseRuntimeStatistic = false;
    return settings;
};

enum OperatorUID
{
UID_Extract_0 = 1,
UID_Extract_0_Data0 = 2,
UID_Split_1 = 3,
UID_SV1_Extract_Split_out0 = 4,
UID_SV1_Extract_Split_out1 = 5,
UID_HashJoin_2 = 6,
UID_HashJoin_2_Data0 = 7,
UID_Extract_3 = 8,
UID_SV2_Extract_out0 = 9,
UID_HashJoin_4 = 10,
UID_HashJoin_4_Data0 = 11,
UID_Process_5 = 12,
UID_Process_5_Data0 = 13,
UID_SV3_Combine_out0 = 14,
UID_Split_1_0,
UID_Split_1_1,
UID_HashJoin_2_0,
UID_HashJoin_2_1,
UID_HashJoin_4_0,
UID_HashJoin_4_1,
UID_HashJoin_2_FB_0,
UID_HashJoin_2_FB_1,
UID_HashJoin_4_FB_0,
UID_HashJoin_4_FB_1,
UID_ParallelUnionAll_Extract_0,
UID_ParallelUnionAll_Extract_3
};
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

//namespace ScopeGeneratedClasses
//{
    // IDs representing UDTs to be used in native code
    enum UserDefinedTypeId
    {
        
    };

#if defined(COMPILE_MANAGED)
// Explicit instantiations for templated functions that are defined in managed code
#endif // defined(COMPILE_MANAGED)


    class Extract_0_Data0
    {
    public:
        int m_ProductCategoryID;
        int m_ParentProductCategoryID;
        FString m_Name;
        Extract_0_Data0();
        Extract_0_Data0(const Extract_0_Data0 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        Extract_0_Data0(const Extract_0_Data0 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }

        static const std::string GetSchema()
        {
            return std::string{ u8"ProductCategoryID:int,ParentProductCategoryID:int,Name:string" };
        }

        friend ostream & operator<<(ostream & os, Extract_0_Data0 & row);

    };


    INLINE ostream & operator<<(ostream & os, Extract_0_Data0 & row)
    {
        std::string schema = row.GetSchema();
        ScopeEngine::OutputRowContent(schema, &row, os);
        return os;
    }



    class SV1_Extract_Split_out0
    {
    public:
        int m_ProductCategoryID5;
        FString m_Name7;
        SV1_Extract_Split_out0();
        SV1_Extract_Split_out0(const SV1_Extract_Split_out0 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        SV1_Extract_Split_out0(const SV1_Extract_Split_out0 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }

        static const std::string GetSchema()
        {
            return std::string{ u8"ProductCategoryID5:int,Name7:string" };
        }

        friend ostream & operator<<(ostream & os, SV1_Extract_Split_out0 & row);

    };


    INLINE ostream & operator<<(ostream & os, SV1_Extract_Split_out0 & row)
    {
        std::string schema = row.GetSchema();
        ScopeEngine::OutputRowContent(schema, &row, os);
        return os;
    }



    class SV1_Extract_Split_out1
    {
    public:
        int m_ParentProductCategoryID;
        int m_ProductCategoryID1;
        FString m_Name2;
        SV1_Extract_Split_out1();
        SV1_Extract_Split_out1(const SV1_Extract_Split_out1 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        SV1_Extract_Split_out1(const SV1_Extract_Split_out1 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }

        static const std::string GetSchema()
        {
            return std::string{ u8"ParentProductCategoryID:int,ProductCategoryID1:int,Name2:string" };
        }

        friend ostream & operator<<(ostream & os, SV1_Extract_Split_out1 & row);

    };


    INLINE ostream & operator<<(ostream & os, SV1_Extract_Split_out1 & row)
    {
        std::string schema = row.GetSchema();
        ScopeEngine::OutputRowContent(schema, &row, os);
        return os;
    }



    class SV2_Extract_out0
    {
    public:
        int m_ProductID;
        FString m_Name;
        int m_ProductCategoryID;
        SV2_Extract_out0();
        SV2_Extract_out0(const SV2_Extract_out0 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        SV2_Extract_out0(const SV2_Extract_out0 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }

        static const std::string GetSchema()
        {
            return std::string{ u8"ProductID:int,Name:string,ProductCategoryID:int" };
        }

        friend ostream & operator<<(ostream & os, SV2_Extract_out0 & row);

    };


    INLINE ostream & operator<<(ostream & os, SV2_Extract_out0 & row)
    {
        std::string schema = row.GetSchema();
        ScopeEngine::OutputRowContent(schema, &row, os);
        return os;
    }



    class HashJoin_2_Data0
    {
    public:
        int m_ProductCategoryID1;
        FString m_Name2;
        FString m_Name7;
        HashJoin_2_Data0();
        HashJoin_2_Data0(const HashJoin_2_Data0 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        HashJoin_2_Data0(const HashJoin_2_Data0 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }

        static const std::string GetSchema()
        {
            return std::string{ u8"ProductCategoryID1:int,Name2:string,Name7:string" };
        }

        friend ostream & operator<<(ostream & os, HashJoin_2_Data0 & row);

    };


    INLINE ostream & operator<<(ostream & os, HashJoin_2_Data0 & row)
    {
        std::string schema = row.GetSchema();
        ScopeEngine::OutputRowContent(schema, &row, os);
        return os;
    }



    class HashCombineKey_HashJoin_2
    {
    public:
        int m_ParentProductCategoryID_ProductCategoryID5;
        HashCombineKey_HashJoin_2();
        HashCombineKey_HashJoin_2(const HashCombineKey_HashJoin_2 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        HashCombineKey_HashJoin_2(const HashCombineKey_HashJoin_2 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }

        static const std::string GetSchema()
        {
            return std::string{ u8"ParentProductCategoryID_ProductCategoryID5:int" };
        }

        friend ostream & operator<<(ostream & os, HashCombineKey_HashJoin_2 & row);

    };


    INLINE ostream & operator<<(ostream & os, HashCombineKey_HashJoin_2 & row)
    {
        std::string schema = row.GetSchema();
        ScopeEngine::OutputRowContent(schema, &row, os);
        return os;
    }



    class HashCombineValue_HashJoin_2
    {
    public:
        FString m_Name7;
        HashCombineValue_HashJoin_2();
        HashCombineValue_HashJoin_2(const HashCombineValue_HashJoin_2 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        HashCombineValue_HashJoin_2(const HashCombineValue_HashJoin_2 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }

        static const std::string GetSchema()
        {
            return std::string{ u8"Name7:string" };
        }

        friend ostream & operator<<(ostream & os, HashCombineValue_HashJoin_2 & row);

    };


    INLINE ostream & operator<<(ostream & os, HashCombineValue_HashJoin_2 & row)
    {
        std::string schema = row.GetSchema();
        ScopeEngine::OutputRowContent(schema, &row, os);
        return os;
    }



    class HashJoin_4_Data0
    {
    public:
        int m_ProductID;
        FString m_Name;
        FString m_Name2;
        FString m_Name7;
        HashJoin_4_Data0();
        HashJoin_4_Data0(const HashJoin_4_Data0 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        HashJoin_4_Data0(const HashJoin_4_Data0 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }

        static const std::string GetSchema()
        {
            return std::string{ u8"ProductID:int,Name:string,Name2:string,Name7:string" };
        }

        friend ostream & operator<<(ostream & os, HashJoin_4_Data0 & row);

    };


    INLINE ostream & operator<<(ostream & os, HashJoin_4_Data0 & row)
    {
        std::string schema = row.GetSchema();
        ScopeEngine::OutputRowContent(schema, &row, os);
        return os;
    }



    class HashCombineKey_HashJoin_4
    {
    public:
        int m_ProductCategoryID_ProductCategoryID1;
        HashCombineKey_HashJoin_4();
        HashCombineKey_HashJoin_4(const HashCombineKey_HashJoin_4 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        HashCombineKey_HashJoin_4(const HashCombineKey_HashJoin_4 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }

        static const std::string GetSchema()
        {
            return std::string{ u8"ProductCategoryID_ProductCategoryID1:int" };
        }

        friend ostream & operator<<(ostream & os, HashCombineKey_HashJoin_4 & row);

    };


    INLINE ostream & operator<<(ostream & os, HashCombineKey_HashJoin_4 & row)
    {
        std::string schema = row.GetSchema();
        ScopeEngine::OutputRowContent(schema, &row, os);
        return os;
    }



    class HashCombineValue_HashJoin_4
    {
    public:
        FString m_Name2;
        FString m_Name7;
        HashCombineValue_HashJoin_4();
        HashCombineValue_HashJoin_4(const HashCombineValue_HashJoin_4 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        HashCombineValue_HashJoin_4(const HashCombineValue_HashJoin_4 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }

        static const std::string GetSchema()
        {
            return std::string{ u8"Name2:string,Name7:string" };
        }

        friend ostream & operator<<(ostream & os, HashCombineValue_HashJoin_4 & row);

    };


    INLINE ostream & operator<<(ostream & os, HashCombineValue_HashJoin_4 & row)
    {
        std::string schema = row.GetSchema();
        ScopeEngine::OutputRowContent(schema, &row, os);
        return os;
    }



    class Process_5_Data0
    {
    public:
        int m_ProductKey;
        FString m_ProductName;
        FString m_Cat1;
        FString m_Cat2;
        Process_5_Data0();
        Process_5_Data0(const Process_5_Data0 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        Process_5_Data0(const Process_5_Data0 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }

        static const std::string GetSchema()
        {
            return std::string{ u8"ProductKey:int,ProductName:string,Cat1:string,Cat2:string" };
        }

        friend ostream & operator<<(ostream & os, Process_5_Data0 & row);

    };


    INLINE ostream & operator<<(ostream & os, Process_5_Data0 & row)
    {
        std::string schema = row.GetSchema();
        ScopeEngine::OutputRowContent(schema, &row, os);
        return os;
    }



#if defined(COMPILE_MANAGED)

#endif // defined(COMPILE_MANAGED)


//}

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

#if defined(COMPILE_NATIVE)
    template<> 
    class BinaryExtractPolicy<SV1_Extract_Split_out0>
    {
    public:
        static bool Deserialize(BinaryInputStream * input, SV1_Extract_Split_out0 & row)
        {
            try
            {
                char b = 0;
                input->Read(b);
                if (b==0)
                {
                    input->Read(row.m_ProductCategoryID5);
                    input->Read(row.m_Name7);
                }
                else
                {
                    char ___masking___[1];
                    ___masking___[0] = b;
                    input->Read(row.m_ProductCategoryID5);
                    if ((___masking___[0] & 2 ) != 2)
                    {
                        input->Read(row.m_Name7);
                    }
                    else
                    {
                        row.m_Name7.SetNull();
                    }
                }
            }
            catch (ScopeStreamException &) 
            {
                // we reach the end of file
                return false;
            }

            return true;
        }
    };
#endif // defined(COMPILE_NATIVE)

    template<> 
    class BinaryOutputPolicy<SV1_Extract_Split_out0>
    {
    public:
    
        static void SerializeHeader(BinaryOutputStream * output)
        {
            SCOPE_ASSERT(!"BinaryOutputPolicy::SerializeHeader method should not be invoked.");
        }
        
        __declspec(noinline) static void Serialize(BinaryOutputStream * output, SV1_Extract_Split_out0 & row)
        {
            SIZE_T rowStart =  output->GetOutputer().GetCurrentPosition();
            char b = 0;
            char ___masking___[1];
            ___masking___[0] = 1;
            bool hasNull = false;
            if (row.m_Name7.IsNull())
            {
                hasNull = true;
                ___masking___[0] |= 2;
            }
            if (hasNull)
            {
                output->Write(___masking___[0]);
            }
            else
            {
                output->Write(b);
            }
            output->Write(row.m_ProductCategoryID5);
            if (!row.m_Name7.IsNull())
            {
                output->Write(row.m_Name7);
            }
            SIZE_T rowSize =  output->GetOutputer().GetCurrentPosition() - rowStart;
            auto rowLimit = ScopeEngine::Configuration::GetGlobal().GetMaxOnDiskRowSize();
            if (rowSize > rowLimit)
            {
                std::stringstream ss;
                ss << row << std::endl;
                throw RuntimeException(E_USER_ONDISKROW_TOO_BIG, {rowSize, rowLimit, ss.str()});
            }
        }
        static void Serialize(DummyOutputStream * output, const SV1_Extract_Split_out0 & row)
        {
            SCOPE_ASSERT(false); 
        }
            static void SerializeKeyForSS(MemoryOutputStream* output, const SV1_Extract_Split_out0 & row)
            {
                SCOPE_ASSERT(false); // there is no partition key in the schema
            }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

#if defined(COMPILE_NATIVE)
    template<> 
    class BinaryExtractPolicy<SV1_Extract_Split_out1>
    {
    public:
        static bool Deserialize(BinaryInputStream * input, SV1_Extract_Split_out1 & row)
        {
            try
            {
                char b = 0;
                input->Read(b);
                if (b==0)
                {
                    input->Read(row.m_ParentProductCategoryID);
                    input->Read(row.m_ProductCategoryID1);
                    input->Read(row.m_Name2);
                }
                else
                {
                    char ___masking___[1];
                    ___masking___[0] = b;
                    input->Read(row.m_ParentProductCategoryID);
                    input->Read(row.m_ProductCategoryID1);
                    if ((___masking___[0] & 2 ) != 2)
                    {
                        input->Read(row.m_Name2);
                    }
                    else
                    {
                        row.m_Name2.SetNull();
                    }
                }
            }
            catch (ScopeStreamException &) 
            {
                // we reach the end of file
                return false;
            }

            return true;
        }
    };
#endif // defined(COMPILE_NATIVE)

    template<> 
    class BinaryOutputPolicy<SV1_Extract_Split_out1>
    {
    public:
    
        static void SerializeHeader(BinaryOutputStream * output)
        {
            SCOPE_ASSERT(!"BinaryOutputPolicy::SerializeHeader method should not be invoked.");
        }
        
        __declspec(noinline) static void Serialize(BinaryOutputStream * output, SV1_Extract_Split_out1 & row)
        {
            SIZE_T rowStart =  output->GetOutputer().GetCurrentPosition();
            char b = 0;
            char ___masking___[1];
            ___masking___[0] = 1;
            bool hasNull = false;
            if (row.m_Name2.IsNull())
            {
                hasNull = true;
                ___masking___[0] |= 2;
            }
            if (hasNull)
            {
                output->Write(___masking___[0]);
            }
            else
            {
                output->Write(b);
            }
            output->Write(row.m_ParentProductCategoryID);
            output->Write(row.m_ProductCategoryID1);
            if (!row.m_Name2.IsNull())
            {
                output->Write(row.m_Name2);
            }
            SIZE_T rowSize =  output->GetOutputer().GetCurrentPosition() - rowStart;
            auto rowLimit = ScopeEngine::Configuration::GetGlobal().GetMaxOnDiskRowSize();
            if (rowSize > rowLimit)
            {
                std::stringstream ss;
                ss << row << std::endl;
                throw RuntimeException(E_USER_ONDISKROW_TOO_BIG, {rowSize, rowLimit, ss.str()});
            }
        }
        static void Serialize(DummyOutputStream * output, const SV1_Extract_Split_out1 & row)
        {
            SCOPE_ASSERT(false); 
        }
            static void SerializeKeyForSS(MemoryOutputStream* output, const SV1_Extract_Split_out1 & row)
            {
                SCOPE_ASSERT(false); // there is no partition key in the schema
            }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

#if defined(COMPILE_NATIVE)
    template<> 
    class BinaryExtractPolicy<SV2_Extract_out0>
    {
    public:
        static bool Deserialize(BinaryInputStream * input, SV2_Extract_out0 & row)
        {
            try
            {
                char b = 0;
                input->Read(b);
                if (b==0)
                {
                    input->Read(row.m_ProductID);
                    input->Read(row.m_Name);
                    input->Read(row.m_ProductCategoryID);
                }
                else
                {
                    char ___masking___[1];
                    ___masking___[0] = b;
                    input->Read(row.m_ProductID);
                    if ((___masking___[0] & 2 ) != 2)
                    {
                        input->Read(row.m_Name);
                    }
                    else
                    {
                        row.m_Name.SetNull();
                    }
                    input->Read(row.m_ProductCategoryID);
                }
            }
            catch (ScopeStreamException &) 
            {
                // we reach the end of file
                return false;
            }

            return true;
        }
    };
#endif // defined(COMPILE_NATIVE)

    template<> 
    class BinaryOutputPolicy<SV2_Extract_out0>
    {
    public:
    
        static void SerializeHeader(BinaryOutputStream * output)
        {
            SCOPE_ASSERT(!"BinaryOutputPolicy::SerializeHeader method should not be invoked.");
        }
        
        __declspec(noinline) static void Serialize(BinaryOutputStream * output, SV2_Extract_out0 & row)
        {
            SIZE_T rowStart =  output->GetOutputer().GetCurrentPosition();
            char b = 0;
            char ___masking___[1];
            ___masking___[0] = 1;
            bool hasNull = false;
            if (row.m_Name.IsNull())
            {
                hasNull = true;
                ___masking___[0] |= 2;
            }
            if (hasNull)
            {
                output->Write(___masking___[0]);
            }
            else
            {
                output->Write(b);
            }
            output->Write(row.m_ProductID);
            if (!row.m_Name.IsNull())
            {
                output->Write(row.m_Name);
            }
            output->Write(row.m_ProductCategoryID);
            SIZE_T rowSize =  output->GetOutputer().GetCurrentPosition() - rowStart;
            auto rowLimit = ScopeEngine::Configuration::GetGlobal().GetMaxOnDiskRowSize();
            if (rowSize > rowLimit)
            {
                std::stringstream ss;
                ss << row << std::endl;
                throw RuntimeException(E_USER_ONDISKROW_TOO_BIG, {rowSize, rowLimit, ss.str()});
            }
        }
        static void Serialize(DummyOutputStream * output, const SV2_Extract_out0 & row)
        {
            SCOPE_ASSERT(false); 
        }
            static void SerializeKeyForSS(MemoryOutputStream* output, const SV2_Extract_out0 & row)
            {
                SCOPE_ASSERT(false); // there is no partition key in the schema
            }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

#if defined(COMPILE_NATIVE)
    template<> 
    class BinaryExtractPolicy<HashJoin_2_Data0>
    {
    public:
        static bool Deserialize(BinaryInputStream * input, HashJoin_2_Data0 & row)
        {
            try
            {
                char b = 0;
                input->Read(b);
                if (b==0)
                {
                    input->Read(row.m_ProductCategoryID1);
                    input->Read(row.m_Name2);
                    input->Read(row.m_Name7);
                }
                else
                {
                    char ___masking___[1];
                    ___masking___[0] = b;
                    input->Read(row.m_ProductCategoryID1);
                    if ((___masking___[0] & 2 ) != 2)
                    {
                        input->Read(row.m_Name2);
                    }
                    else
                    {
                        row.m_Name2.SetNull();
                    }
                    if ((___masking___[0] & 4 ) != 4)
                    {
                        input->Read(row.m_Name7);
                    }
                    else
                    {
                        row.m_Name7.SetNull();
                    }
                }
            }
            catch (ScopeStreamException &) 
            {
                // we reach the end of file
                return false;
            }

            return true;
        }
    };
#endif // defined(COMPILE_NATIVE)

    template<> 
    class BinaryOutputPolicy<HashJoin_2_Data0>
    {
    public:
    
        static void SerializeHeader(BinaryOutputStream * output)
        {
            SCOPE_ASSERT(!"BinaryOutputPolicy::SerializeHeader method should not be invoked.");
        }
        
        __declspec(noinline) static void Serialize(BinaryOutputStream * output, HashJoin_2_Data0 & row)
        {
            SIZE_T rowStart =  output->GetOutputer().GetCurrentPosition();
            char b = 0;
            char ___masking___[1];
            ___masking___[0] = 1;
            bool hasNull = false;
            if (row.m_Name2.IsNull())
            {
                hasNull = true;
                ___masking___[0] |= 2;
            }
            if (row.m_Name7.IsNull())
            {
                hasNull = true;
                ___masking___[0] |= 4;
            }
            if (hasNull)
            {
                output->Write(___masking___[0]);
            }
            else
            {
                output->Write(b);
            }
            output->Write(row.m_ProductCategoryID1);
            if (!row.m_Name2.IsNull())
            {
                output->Write(row.m_Name2);
            }
            if (!row.m_Name7.IsNull())
            {
                output->Write(row.m_Name7);
            }
            SIZE_T rowSize =  output->GetOutputer().GetCurrentPosition() - rowStart;
            auto rowLimit = ScopeEngine::Configuration::GetGlobal().GetMaxOnDiskRowSize();
            if (rowSize > rowLimit)
            {
                std::stringstream ss;
                ss << row << std::endl;
                throw RuntimeException(E_USER_ONDISKROW_TOO_BIG, {rowSize, rowLimit, ss.str()});
            }
        }
        static void Serialize(DummyOutputStream * output, const HashJoin_2_Data0 & row)
        {
            SCOPE_ASSERT(false); 
        }
            static void SerializeKeyForSS(MemoryOutputStream* output, const HashJoin_2_Data0 & row)
            {
                SCOPE_ASSERT(false); // there is no partition key in the schema
            }
    };

#pragma region Schema Constructors
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE Extract_0_Data0::Extract_0_Data0()
    {
        m_ProductCategoryID = 0;
        m_ParentProductCategoryID = 0;
    }
    INLINE Extract_0_Data0::Extract_0_Data0(const Extract_0_Data0 & c, IncrementalAllocator * alloc) :
            m_Name(c.m_Name, alloc)
    {
        m_ProductCategoryID = c.m_ProductCategoryID;
        m_ParentProductCategoryID = c.m_ParentProductCategoryID;
    }

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE SV1_Extract_Split_out0::SV1_Extract_Split_out0()
    {
        m_ProductCategoryID5 = 0;
    }
    INLINE SV1_Extract_Split_out0::SV1_Extract_Split_out0(const SV1_Extract_Split_out0 & c, IncrementalAllocator * alloc) :
            m_Name7(c.m_Name7, alloc)
    {
        m_ProductCategoryID5 = c.m_ProductCategoryID5;
    }

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE SV1_Extract_Split_out1::SV1_Extract_Split_out1()
    {
        m_ParentProductCategoryID = 0;
        m_ProductCategoryID1 = 0;
    }
    INLINE SV1_Extract_Split_out1::SV1_Extract_Split_out1(const SV1_Extract_Split_out1 & c, IncrementalAllocator * alloc) :
            m_Name2(c.m_Name2, alloc)
    {
        m_ParentProductCategoryID = c.m_ParentProductCategoryID;
        m_ProductCategoryID1 = c.m_ProductCategoryID1;
    }

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE SV2_Extract_out0::SV2_Extract_out0()
    {
        m_ProductID = 0;
        m_ProductCategoryID = 0;
    }
    INLINE SV2_Extract_out0::SV2_Extract_out0(const SV2_Extract_out0 & c, IncrementalAllocator * alloc) :
            m_Name(c.m_Name, alloc)
    {
        m_ProductID = c.m_ProductID;
        m_ProductCategoryID = c.m_ProductCategoryID;
    }

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE HashJoin_2_Data0::HashJoin_2_Data0()
    {
        m_ProductCategoryID1 = 0;
    }
    INLINE HashJoin_2_Data0::HashJoin_2_Data0(const HashJoin_2_Data0 & c, IncrementalAllocator * alloc) :
            m_Name2(c.m_Name2, alloc),
            m_Name7(c.m_Name7, alloc)
    {
        m_ProductCategoryID1 = c.m_ProductCategoryID1;
    }

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE HashCombineKey_HashJoin_2::HashCombineKey_HashJoin_2()
    {
        m_ParentProductCategoryID_ProductCategoryID5 = 0;
    }
    INLINE HashCombineKey_HashJoin_2::HashCombineKey_HashJoin_2(const HashCombineKey_HashJoin_2 & c, IncrementalAllocator * alloc)
    {
        m_ParentProductCategoryID_ProductCategoryID5 = c.m_ParentProductCategoryID_ProductCategoryID5;
    }

    template <typename Allocator>
    INLINE HashCombineKey_HashJoin_2::HashCombineKey_HashJoin_2(const HashCombineKey_HashJoin_2 & c, FixedArrayTypeMemoryManager<Allocator> * memoryManager)
    {

        m_ParentProductCategoryID_ProductCategoryID5 = c.m_ParentProductCategoryID_ProductCategoryID5;
    }

    template <typename Allocator>
    INLINE void HashCombineKey_HashJoin_2::Delete(FixedArrayTypeMemoryManager<Allocator> * memoryManager)
    {
    }


// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE HashCombineValue_HashJoin_2::HashCombineValue_HashJoin_2()
    {
    }
    INLINE HashCombineValue_HashJoin_2::HashCombineValue_HashJoin_2(const HashCombineValue_HashJoin_2 & c, IncrementalAllocator * alloc) :
            m_Name7(c.m_Name7, alloc)
    {
    }

    template <typename Allocator>
    INLINE HashCombineValue_HashJoin_2::HashCombineValue_HashJoin_2(const HashCombineValue_HashJoin_2 & c, FixedArrayTypeMemoryManager<Allocator> * memoryManager)
    {

        m_Name7 = c.m_Name7;
        memoryManager->Copy(m_Name7);
    }

    template <typename Allocator>
    INLINE void HashCombineValue_HashJoin_2::Delete(FixedArrayTypeMemoryManager<Allocator> * memoryManager)
    {
        memoryManager->Delete(m_Name7);
    }


// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE HashJoin_4_Data0::HashJoin_4_Data0()
    {
        m_ProductID = 0;
    }

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE HashCombineKey_HashJoin_4::HashCombineKey_HashJoin_4()
    {
        m_ProductCategoryID_ProductCategoryID1 = 0;
    }
    INLINE HashCombineKey_HashJoin_4::HashCombineKey_HashJoin_4(const HashCombineKey_HashJoin_4 & c, IncrementalAllocator * alloc)
    {
        m_ProductCategoryID_ProductCategoryID1 = c.m_ProductCategoryID_ProductCategoryID1;
    }

    template <typename Allocator>
    INLINE HashCombineKey_HashJoin_4::HashCombineKey_HashJoin_4(const HashCombineKey_HashJoin_4 & c, FixedArrayTypeMemoryManager<Allocator> * memoryManager)
    {

        m_ProductCategoryID_ProductCategoryID1 = c.m_ProductCategoryID_ProductCategoryID1;
    }

    template <typename Allocator>
    INLINE void HashCombineKey_HashJoin_4::Delete(FixedArrayTypeMemoryManager<Allocator> * memoryManager)
    {
    }


// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE HashCombineValue_HashJoin_4::HashCombineValue_HashJoin_4()
    {
    }
    INLINE HashCombineValue_HashJoin_4::HashCombineValue_HashJoin_4(const HashCombineValue_HashJoin_4 & c, IncrementalAllocator * alloc) :
            m_Name2(c.m_Name2, alloc),
            m_Name7(c.m_Name7, alloc)
    {
    }

    template <typename Allocator>
    INLINE HashCombineValue_HashJoin_4::HashCombineValue_HashJoin_4(const HashCombineValue_HashJoin_4 & c, FixedArrayTypeMemoryManager<Allocator> * memoryManager)
    {

        m_Name2 = c.m_Name2;
        memoryManager->Copy(m_Name2);
        m_Name7 = c.m_Name7;
        memoryManager->Copy(m_Name7);
    }

    template <typename Allocator>
    INLINE void HashCombineValue_HashJoin_4::Delete(FixedArrayTypeMemoryManager<Allocator> * memoryManager)
    {
        memoryManager->Delete(m_Name2);
        memoryManager->Delete(m_Name7);
    }


// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE Process_5_Data0::Process_5_Data0()
    {
        m_ProductKey = 0;
    }

#pragma endregion Schema Constructors
#pragma hdrstop
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_INIT_SHUTDOWN)
#if defined(COMPILE_MANAGED)
extern "C" __declspec(dllexport) void __stdcall InitVertexManaged(std::string * argv, int argc)
{
#if defined(FORCEMANAGEDDATETIMESER)
    ScopeEngine::ScopeDateTime::ForceManagedSerialization = true;
#endif
    cli::array<String^>^ arguments = ScopeEngineManaged::GroupArguments(argv, argc);
    ScopeEngineManaged::InitializeScopeEngineManaged(arguments);
}

extern "C" __declspec(dllexport) void __stdcall ShutdownVertexManaged(CLRMemoryStat& stat)
{
    ScopeEngineManaged::FinalizeScopeEngineManaged(stat);
}
#endif //#if defined(COMPILE_MANAGED)

#if defined(COMPILE_NATIVE)
ScopeEngine::ScopeCEPCheckpointManager* g_scopeCEPCheckpointManager = NULL;

extern "C" __declspec(dllexport) void __stdcall InitVertexNative(VertexExecutionInfo * vertexExecutionInfo)
{
#if defined(FORCEMANAGEDDATETIMESER)
    ScopeEngine::ScopeDateTime::ForceManagedSerialization = true;
#endif

    ErrorManager::GetGlobal()->EnableJSON();
}

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



// Add broadcast vertex code
extern "C" __declspec(dllexport) void __stdcall SV_CopyThrough_execute(std::string * argv, int argc, InputFileInfo* inputs, int inputCnt, OutputFileInfo* outputs, int outputCnt, VertexExecutionInfo * vertexExecutionInfo)
{
    SCOPE_ASSERT(inputCnt == 1 && outputCnt == 1);
    IOManager::CopyStream(IOManager::GetGlobal()->GetDevice(inputs[0].inputFileName), IOManager::GetGlobal()->GetDevice(outputs[0].outputFileName));
}

#endif //#if defined(COMPILE_NATIVE)


#endif //#if defined(COMPILE_INIT_SHUTDOWN)
#pragma region SV1_Extract_Split
#if defined(COMPILE_SV1_EXTRACT_SPLIT) || defined(COMPILE_ALL_VERTICES)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

#if defined(COMPILE_NATIVE)
    template<> 
    class TextExtractPolicy<Extract_0_Data0, UID_Extract_0>
    {
    public:
        static bool Deserialize(TextInputStream<TextInputStreamTraitsConst<',', '\0', '\0', false, true, UTF8, true, false, false, 1, CharFormat_uint16, false, false>, CosmosInput> * input, Extract_0_Data0 & row)
        {
            for(;;)
            {
                try
                {
                    // When we start a new row we always skip all empty lines first.
                    if (!input->StartRow())
                    {
                        return false;
                    }

                    input->Read(row.m_ProductCategoryID);
                    input->Read(row.m_ParentProductCategoryID);
                    input->Read(row.m_Name);
                    input->SkipColumn();
                    input->SkipColumn();

                    if (!input->EndRow())
                    {
                        // Too many columns in row - report error.
                        throw ScopeStreamExceptionWithEvidence(
                            E_EXTRACT_ROW_DELIMITER_EXPECTED,
                            { input->CurrentLineNumber(), input->CurrentField() },
                            EvidenceFormatter::FormatText(
                                input->GetBufferStart(),
                                input->GetReadPosition(),
                                input->GetBufferEnd(),
                                input->rowDelimiter,
                                input->delimiter));
                    }
                    return true;
                }
                catch (const ExtractInvalidCharacterException& e)
                {
                    std::throw_with_nested(ExtractException(
                        E_EXTRACT_ENCODING_ERROR,
                        { input->GetEncodedGlobalFileOffset() + e.GetErrorOffset(), input->CurrentLineNumber() },
                        false));
                }
                catch (const TextConversionException& e)
                {
                    std::throw_with_nested(ExtractException(
                        E_EXTRACT_ROW_ERROR,
                        { e.GetRowNumber(), e.GetColumnIndex(), GetColumnName(e.GetColumnIndex()) },
                        false));
                }
                catch (const RuntimeMemoryException& /* e */)
                {
                    std::throw_with_nested(ScopeStreamExceptionWithEvidence(
                        E_EXTRACT_ROW_TOO_LONG,
                        { input->CurrentLineNumber(), Configuration::GetGlobal().GetMaxInMemoryRowSize() },
                        EvidenceFormatter::FormatText(
                            input->GetBufferStart(),
                            input->GetReadPosition(),
                            input->GetBufferEnd(),
                            input->rowDelimiter,
                            input->delimiter)));
                }
                catch (const ScopeStreamException& e)
                {
                    switch(e.Error())
                    {
                    // Following error will terminate read
                    case ScopeStreamException::EndOfFile:
                    case ScopeStreamException::BadDevice:
                        return false;

                    // Bad rows throw exception
                    case ScopeStreamException::UnexpectedNewLine:
                        // Wrong number of columns in row - report error
                        // At this point, line number is increased to point at the next line. Subtract 1 to get line
                        // number of the offending row.
                        throw ScopeStreamExceptionWithEvidence(
                            E_EXTRACT_UNEXPECTED_ROW_DELIMITER,
                            { input->CurrentLineNumber() - 1, 5, input->CurrentField() },
                            EvidenceFormatter::FormatText(
                                input->GetBufferStart(),
                                input->GetReadPosition(),
                                input->GetBufferEnd(),
                                input->rowDelimiter,
                                input->delimiter));

                    // All exceptions should be handled above.
                    default:
                        SCOPE_ASSERT(false);
                    }
                }
            }
        }
        static const char* GetColumnName(std::size_t columnIndex)
        {
            static const std::array<const char*, 6> c_columnNames =
            {
                "ProductCategoryID",
                "ParentProductCategoryID",
                "Name",
                "rowguid",
                "ModifiedDate",
                "*** END ***"
            };

            auto idx = std::min(columnIndex, c_columnNames.size() - 1);
            return c_columnNames[idx];
        }
    };

#endif // defined(COMPILE_NATIVE)

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

    static const char * StringTable_Split_1_0 [] =
    {
        "ProductCategoryID",
        "Name",
        "\"*** After Last Expression ***\"",
    };

    template<>
    class RowTransformPolicy<Extract_0_Data0, SV1_Extract_Split_out0, UID_Split_1_0>
    {
    public:

        void Init(ManagedRow<Extract_0_Data0> *)
        {
            // Nothing to do
        }
        static bool FilterTransformRow(Extract_0_Data0 & input, SV1_Extract_Split_out0 & output, IncrementalAllocator * alloc)
        {

            int exceptionIndex = 0;
            try
            {
                    output.m_ProductCategoryID5 = input.m_ProductCategoryID;
                    exceptionIndex++;
                    output.m_Name7 = input.m_Name;
                    exceptionIndex++;
                    return true;
                    }
                    catch(...)
                    {
                        std::throw_with_nested(RuntimeExpressionException(StringTable_Split_1_0[exceptionIndex]));
                    }
    }

            #pragma warning(push)
            #pragma warning(disable: 4100) // 'alloc': unreferenced formal parameter
            static void InitializeStatics(IncrementalAllocator * alloc)
            {
            #pragma warning(pop)
            }
    
            // get operator resource requirements
            static OperatorRequirements GetOperatorRequirements()
            {
                return OperatorRequirements();
            }
        };
    

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

    static const char * StringTable_Split_1_1 [] =
    {
        "ParentProductCategoryID",
        "ProductCategoryID",
        "Name",
        "\"*** After Last Expression ***\"",
    };

    template<>
    class RowTransformPolicy<Extract_0_Data0, SV1_Extract_Split_out1, UID_Split_1_1>
    {
    public:

        void Init(ManagedRow<Extract_0_Data0> *)
        {
            // Nothing to do
        }
        static bool FilterTransformRow(Extract_0_Data0 & input, SV1_Extract_Split_out1 & output, IncrementalAllocator * alloc)
        {

            int exceptionIndex = 0;
            try
            {
                    output.m_ParentProductCategoryID = input.m_ParentProductCategoryID;
                    exceptionIndex++;
                    output.m_ProductCategoryID1 = input.m_ProductCategoryID;
                    exceptionIndex++;
                    output.m_Name2 = input.m_Name;
                    exceptionIndex++;
                    return true;
                    }
                    catch(...)
                    {
                        std::throw_with_nested(RuntimeExpressionException(StringTable_Split_1_1[exceptionIndex]));
                    }
    }

            #pragma warning(push)
            #pragma warning(disable: 4100) // 'alloc': unreferenced formal parameter
            static void InitializeStatics(IncrementalAllocator * alloc)
            {
            #pragma warning(pop)
            }
    
            // get operator resource requirements
            static OperatorRequirements GetOperatorRequirements()
            {
                return OperatorRequirements();
            }
        };
    

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



#if defined(COMPILE_NATIVE)
    template<> 
    class SplitPolicy<typename Extract_0_Data0, UID_Split_1>
    {
        SIZE_T m_outputBufSize;
        int m_outputBufCnt;

        typedef SplitOutputterSentinel<Extract_0_Data0> SplitOutputType_Split_1_2;
        SplitOutputType_Split_1_2 splitOutputter_Split_1_2;

        typedef SplitOutputter<SplitOutputType_Split_1_2, SV1_Extract_Split_out1, BinaryOutputPolicy<SV1_Extract_Split_out1>, BinaryOutputStream, UID_Split_1_1> SplitOutputType_Split_1_1;
        SplitOutputType_Split_1_1 splitOutputter_Split_1_1;


        typedef SplitOutputter<SplitOutputType_Split_1_1, SV1_Extract_Split_out0, BinaryOutputPolicy<SV1_Extract_Split_out0>, BinaryOutputStream, UID_Split_1_0> SplitOutputType_Split_1_0;
        SplitOutputType_Split_1_0 splitOutputter_Split_1_0;


    public:
        SplitPolicy(OutputFileInfo * outputFiles, SIZE_T outputBufSize, int outputBufCnt) : m_outputBufSize(outputBufSize), m_outputBufCnt(outputBufCnt),
            splitOutputter_Split_1_1(&splitOutputter_Split_1_2, outputFiles[1].outputFileName, false, outputBufSize, outputBufCnt, UID_SV1_Extract_Split_out1),
            splitOutputter_Split_1_0(&splitOutputter_Split_1_1, outputFiles[0].outputFileName, false, outputBufSize, outputBufCnt, UID_SV1_Extract_Split_out0)
        {
        }

        void SetSequenceNumber(int sequenceNumber)
        {
            splitOutputter_Split_1_1.SetSequenceNumber(sequenceNumber);
            splitOutputter_Split_1_0.SetSequenceNumber(sequenceNumber);
        }

        void Init()
        {
            splitOutputter_Split_1_0.Init(nullptr);
        }

        void Close()
        {
            splitOutputter_Split_1_0.Close();
        }

        void ProcessMetadata(PartitionMetadata * metadata)
        {
            splitOutputter_Split_1_0.ProcessMetadata(metadata);
        }

        void OutputHeader()
        {
            splitOutputter_Split_1_0.OutputHeader();
        }

        void ProcessRow(Extract_0_Data0 & input)
        {
            splitOutputter_Split_1_0.ProcessRow(input);
        }

        __declspec(noinline)
		void WriteRuntimeStats(TreeNode & root)
        {
            splitOutputter_Split_1_0.WriteRuntimeStats(root);
        }

        LONGLONG GetTotalIoWaitTime()
        {
            return splitOutputter_Split_1_0.GetTotalIoWaitTime();
        }

        // get operator resource requirements
        OperatorRequirements GetOperatorRequirements()
        {
            return splitOutputter_Split_1_0.GetOperatorRequirements()
	.AddMemoryForOutputUStreams(1, m_outputBufSize, m_outputBufCnt)
	.AddMemoryForOutputUStreams(1, m_outputBufSize, m_outputBufCnt);
        }

        void FlushOutput(bool forcePersistent = false)
        {
            splitOutputter_Split_1_0.FlushOutput(forcePersistent);
        }

        void DoScopeCEPCheckpoint(BinaryOutputStream & output)
        {
            splitOutputter_Split_1_0.DoScopeCEPCheckpoint(output);
        }

        void LoadScopeCEPCheckpoint(BinaryInputStream & input)
        {
            splitOutputter_Split_1_0.LoadScopeCEPCheckpoint(input);
        }

    };

#endif // defined(COMPILE_NATIVE)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



#if defined(COMPILE_NATIVE)
namespace ScopeGeneratedClasses
{
    extern "C" __declspec(dllexport) void __stdcall SV1_Extract_Split_execute(std::string * argv, int argc, InputFileInfo* inputs, int inputCnt, OutputFileInfo* outputs, int outputCnt, VertexExecutionInfo * vertexExecutionInfo)
    {
#ifdef USE_SSE4_2
        // check CPUID to make sure this machine supports SSE4_2 instructions
        // - this is incase we download a cluster vertex and try and debug it on a machine that doesn't support these instructions
        int cpuInfo[4];
        __cpuid(cpuInfo, 0x00000001);
        //Array index | Bit range | Description 
        // 2          | 20        | SSE4.2 extensions
        if ((cpuInfo[2] & (1 << 20)) == 0)
        {
            throw RuntimeException(E_USER_ERROR, "Please recompile __ScopeCodeGenEngine__.dll without /DUSE_SSE4_2");
            return;
        }
#endif

        Configuration::Create(ET_Azure, GetCompilerSettings(), vertexExecutionInfo);
        SIZE_T x_inputBufSize, x_outputBufSize, x_inputVirtualMemoryLimit;
        int    x_inputBufCnt, x_outputBufCnt;
        
        MemoryManager::CalculateIOBufferSize(inputCnt, outputCnt, MemoryManager::x_vertexMemoryLimit, MemoryManager::x_vertexReserveMemory, x_inputBufSize, x_inputBufCnt, x_outputBufSize, x_outputBufCnt, x_inputVirtualMemoryLimit, false);

        const bool IsNativeOnlyVertex = true;
        // If we have more than one input, we will random shuffle it
        if (inputCnt - 0 > 1)
        {
            ScopeRandom scopeRandom((int)vertexExecutionInfo->m_vertexId);
            auto lambda = [&scopeRandom](int max)->int { return (scopeRandom.Next() % max + max) % max;}; // scopeRandom.Next() % max could be negative value
            random_shuffle(&inputs[0], inputs + inputCnt - 0, lambda ); 
        }
        // Define extractor type and construct objects
        // 
        typedef Extractor<Extract_0_Data0, TextExtractPolicy<Extract_0_Data0, UID_Extract_0>, TextInputStream<TextInputStreamTraitsConst<',', '\0', '\0', false, true, UTF8, true, false, false, 1, CharFormat_uint16, false, false>, CosmosInput>> ExtractorType1_SV1_Extract_Split;
        unique_ptr<unique_ptr<ExtractorType1_SV1_Extract_Split>[]> extractor_0_array(new unique_ptr<ExtractorType1_SV1_Extract_Split>[inputCnt - 0]);
        
        for (int i = 0; i < inputCnt; i++)
        {
            // 
            extractor_0_array[i - 0].reset(new ExtractorType1_SV1_Extract_Split(inputs[i], false, x_inputBufSize, x_inputBufCnt, x_inputVirtualMemoryLimit, InputStreamParameters(',', '\0', '\0', static_cast<const char*>(__nullptr), false, true, UTF8, true, false, 1, CharFormat_uint16), UID_Extract_0));
        }

    ExtractorType1_SV1_Extract_Split ** extractor_0 = (ExtractorType1_SV1_Extract_Split **)extractor_0_array.get();

        
        ULONG extractor_0_count = (ULONG) inputCnt - 0;
        // Merge streams N->1
        typedef ParallelUnionAll<ExtractorType1_SV1_Extract_Split, Extract_0_Data0, IsNativeOnlyVertex> UnionAllType_Extract_0_Split_1_connector;
        unique_ptr<UnionAllType_Extract_0_Split_1_connector> unionall_Extract_0_Split_1_connector_ptr(new UnionAllType_Extract_0_Split_1_connector(extractor_0,extractor_0_count,false,UID_ParallelUnionAll_Extract_0));
        UnionAllType_Extract_0_Split_1_connector * unionall_Extract_0_Split_1_connector = unionall_Extract_0_Split_1_connector_ptr.get();
        ULONG unionall_Extract_0_Split_1_connector_count = 1;
        // Define splitter type

        typedef Splitter<UnionAllType_Extract_0_Split_1_connector, Extract_0_Data0, false, UID_Split_1> SplitterType_Split_1;

        // Construct operator and initialize it.
        unique_ptr<SplitterType_Split_1> splitter_Split_1_ptr (new SplitterType_Split_1(unionall_Extract_0_Split_1_connector, outputs, x_outputBufSize, x_outputBufCnt, UID_Split_1));
        SplitterType_Split_1 * splitter_Split_1 = splitter_Split_1_ptr.get();

        if (argv != nullptr && argc > 0)
        {
            try
            {
                int sequenceNumber = GetSequenceNumber(argv, argc);
                splitter_Split_1->SetSequenceNumber(sequenceNumber);
            }
            catch(const RuntimeException&)
            {
                // Sequence number will remain 0 in splitter_Split_1.
            }
        }

        try
        {
            // Init operator chain
            splitter_Split_1->Init();

            // Execute the whole vertex by calling the GetNextRow on top operator
            Extract_0_Data0 row;
            splitter_Split_1->GetNextRow(row);

            // Close operator chain
            splitter_Split_1->Close();
        }
        catch (const ExceptionWithStack& ex)
        {
            if (vertexExecutionInfo->m_reportStatusFunc != NULL)
            {
                ErrorManager::GetGlobal()->SetError(std::current_exception(), "VertexExecute");
                vertexExecutionInfo->m_reportStatusFunc(vertexExecutionInfo->m_statusReportContext);
            }
            
            std::cout << "Caught exception: " << ex.what() << std::endl << ex.GetStack() << std::endl;
            throw;
        }


        // Write out execution stats
        MemoryManager::GetGlobal()->WriteRuntimeStats(vertexExecutionInfo->m_statsRoot);
        splitter_Split_1->WriteRuntimeStats(vertexExecutionInfo->m_statsRoot);
    }
}
#endif // defined(COMPILE_NATIVE)

#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
#if defined(COMPILE_NATIVE)
#endif // defined(COMPILE_NATIVE)

#endif
#pragma endregion SV1_Extract_Split
#pragma region SV2_Extract
#if defined(COMPILE_SV2_EXTRACT) || defined(COMPILE_ALL_VERTICES)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

#if defined(COMPILE_NATIVE)
    template<> 
    class TextExtractPolicy<SV2_Extract_out0, UID_Extract_3>
    {
    public:
        static bool Deserialize(TextInputStream<TextInputStreamTraitsConst<',', '\0', '\0', false, true, UTF8, true, false, false, 1, CharFormat_uint16, false, false>, CosmosInput> * input, SV2_Extract_out0 & row)
        {
            for(;;)
            {
                try
                {
                    // When we start a new row we always skip all empty lines first.
                    if (!input->StartRow())
                    {
                        return false;
                    }

                    input->Read(row.m_ProductID);
                    input->Read(row.m_Name);
                    input->SkipColumn();
                    input->SkipColumn();
                    input->SkipColumn();
                    input->SkipColumn();
                    input->SkipColumn();
                    input->SkipColumn();
                    input->Read(row.m_ProductCategoryID);
                    input->SkipColumn();
                    input->SkipColumn();
                    input->SkipColumn();
                    input->SkipColumn();
                    input->SkipColumn();
                    input->SkipColumn();
                    input->SkipColumn();
                    input->SkipColumn();

                    if (!input->EndRow())
                    {
                        // Too many columns in row - report error.
                        throw ScopeStreamExceptionWithEvidence(
                            E_EXTRACT_ROW_DELIMITER_EXPECTED,
                            { input->CurrentLineNumber(), input->CurrentField() },
                            EvidenceFormatter::FormatText(
                                input->GetBufferStart(),
                                input->GetReadPosition(),
                                input->GetBufferEnd(),
                                input->rowDelimiter,
                                input->delimiter));
                    }
                    return true;
                }
                catch (const ExtractInvalidCharacterException& e)
                {
                    std::throw_with_nested(ExtractException(
                        E_EXTRACT_ENCODING_ERROR,
                        { input->GetEncodedGlobalFileOffset() + e.GetErrorOffset(), input->CurrentLineNumber() },
                        false));
                }
                catch (const TextConversionException& e)
                {
                    std::throw_with_nested(ExtractException(
                        E_EXTRACT_ROW_ERROR,
                        { e.GetRowNumber(), e.GetColumnIndex(), GetColumnName(e.GetColumnIndex()) },
                        false));
                }
                catch (const RuntimeMemoryException& /* e */)
                {
                    std::throw_with_nested(ScopeStreamExceptionWithEvidence(
                        E_EXTRACT_ROW_TOO_LONG,
                        { input->CurrentLineNumber(), Configuration::GetGlobal().GetMaxInMemoryRowSize() },
                        EvidenceFormatter::FormatText(
                            input->GetBufferStart(),
                            input->GetReadPosition(),
                            input->GetBufferEnd(),
                            input->rowDelimiter,
                            input->delimiter)));
                }
                catch (const ScopeStreamException& e)
                {
                    switch(e.Error())
                    {
                    // Following error will terminate read
                    case ScopeStreamException::EndOfFile:
                    case ScopeStreamException::BadDevice:
                        return false;

                    // Bad rows throw exception
                    case ScopeStreamException::UnexpectedNewLine:
                        // Wrong number of columns in row - report error
                        // At this point, line number is increased to point at the next line. Subtract 1 to get line
                        // number of the offending row.
                        throw ScopeStreamExceptionWithEvidence(
                            E_EXTRACT_UNEXPECTED_ROW_DELIMITER,
                            { input->CurrentLineNumber() - 1, 17, input->CurrentField() },
                            EvidenceFormatter::FormatText(
                                input->GetBufferStart(),
                                input->GetReadPosition(),
                                input->GetBufferEnd(),
                                input->rowDelimiter,
                                input->delimiter));

                    // All exceptions should be handled above.
                    default:
                        SCOPE_ASSERT(false);
                    }
                }
            }
        }
        static const char* GetColumnName(std::size_t columnIndex)
        {
            static const std::array<const char*, 18> c_columnNames =
            {
                "ProductID",
                "Name",
                "ProductNumber",
                "Color",
                "StandardCost",
                "ListPrice",
                "Size",
                "Weight",
                "ProductCategoryID",
                "ProductModelID",
                "SellStartDate",
                "SellEndDate",
                "DiscontinuedDate",
                "ThumbNailPhoto",
                "ThumbnailPhotoFileName",
                "rowguid",
                "ModifiedDate",
                "*** END ***"
            };

            auto idx = std::min(columnIndex, c_columnNames.size() - 1);
            return c_columnNames[idx];
        }
    };

#endif // defined(COMPILE_NATIVE)

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



#if defined(COMPILE_NATIVE)
namespace ScopeGeneratedClasses
{
    extern "C" __declspec(dllexport) void __stdcall SV2_Extract_execute(std::string * argv, int argc, InputFileInfo* inputs, int inputCnt, OutputFileInfo* outputs, int outputCnt, VertexExecutionInfo * vertexExecutionInfo)
    {
#ifdef USE_SSE4_2
        // check CPUID to make sure this machine supports SSE4_2 instructions
        // - this is incase we download a cluster vertex and try and debug it on a machine that doesn't support these instructions
        int cpuInfo[4];
        __cpuid(cpuInfo, 0x00000001);
        //Array index | Bit range | Description 
        // 2          | 20        | SSE4.2 extensions
        if ((cpuInfo[2] & (1 << 20)) == 0)
        {
            throw RuntimeException(E_USER_ERROR, "Please recompile __ScopeCodeGenEngine__.dll without /DUSE_SSE4_2");
            return;
        }
#endif

        Configuration::Create(ET_Azure, GetCompilerSettings(), vertexExecutionInfo);
        SIZE_T x_inputBufSize, x_outputBufSize, x_inputVirtualMemoryLimit;
        int    x_inputBufCnt, x_outputBufCnt;
        
        MemoryManager::CalculateIOBufferSize(inputCnt, outputCnt, MemoryManager::x_vertexMemoryLimit, MemoryManager::x_vertexReserveMemory, x_inputBufSize, x_inputBufCnt, x_outputBufSize, x_outputBufCnt, x_inputVirtualMemoryLimit, false);

        const bool IsNativeOnlyVertex = true;
        // If we have more than one input, we will random shuffle it
        if (inputCnt - 0 > 1)
        {
            ScopeRandom scopeRandom((int)vertexExecutionInfo->m_vertexId);
            auto lambda = [&scopeRandom](int max)->int { return (scopeRandom.Next() % max + max) % max;}; // scopeRandom.Next() % max could be negative value
            random_shuffle(&inputs[0], inputs + inputCnt - 0, lambda ); 
        }
        // Define extractor type and construct objects
        // 
        typedef Extractor<SV2_Extract_out0, TextExtractPolicy<SV2_Extract_out0, UID_Extract_3>, TextInputStream<TextInputStreamTraitsConst<',', '\0', '\0', false, true, UTF8, true, false, false, 1, CharFormat_uint16, false, false>, CosmosInput>> ExtractorType1_SV2_Extract;
        unique_ptr<unique_ptr<ExtractorType1_SV2_Extract>[]> extractor_0_array(new unique_ptr<ExtractorType1_SV2_Extract>[inputCnt - 0]);
        
        for (int i = 0; i < inputCnt; i++)
        {
            // 
            extractor_0_array[i - 0].reset(new ExtractorType1_SV2_Extract(inputs[i], false, x_inputBufSize, x_inputBufCnt, x_inputVirtualMemoryLimit, InputStreamParameters(',', '\0', '\0', static_cast<const char*>(__nullptr), false, true, UTF8, true, false, 1, CharFormat_uint16), UID_Extract_3));
        }

    ExtractorType1_SV2_Extract ** extractor_0 = (ExtractorType1_SV2_Extract **)extractor_0_array.get();

        
        ULONG extractor_0_count = (ULONG) inputCnt - 0;
        // Merge streams N->1
        typedef ParallelUnionAll<ExtractorType1_SV2_Extract, SV2_Extract_out0, IsNativeOnlyVertex> UnionAllType_Extract_3_SV2_Extract_out0_connector;
        unique_ptr<UnionAllType_Extract_3_SV2_Extract_out0_connector> unionall_Extract_3_SV2_Extract_out0_connector_ptr(new UnionAllType_Extract_3_SV2_Extract_out0_connector(extractor_0,extractor_0_count,false,UID_ParallelUnionAll_Extract_3));
        UnionAllType_Extract_3_SV2_Extract_out0_connector * unionall_Extract_3_SV2_Extract_out0_connector = unionall_Extract_3_SV2_Extract_out0_connector_ptr.get();
        ULONG unionall_Extract_3_SV2_Extract_out0_connector_count = 1;
        // Define outputer type
        typedef Outputer<UnionAllType_Extract_3_SV2_Extract_out0_connector, SV2_Extract_out0, BinaryOutputPolicy<SV2_Extract_out0>, BinaryOutputStream, false> OutputerType2_SV2_Extract;
        // Construct operator and initialize it
        unique_ptr<OutputerType2_SV2_Extract> outputer_SV2_Extract_out0_ptr(new OutputerType2_SV2_Extract(unionall_Extract_3_SV2_Extract_out0_connector, outputs[0].outputFileName, false, x_outputBufSize, x_outputBufCnt, UID_SV2_Extract_out0));
        OutputerType2_SV2_Extract * outputer_SV2_Extract_out0 = outputer_SV2_Extract_out0_ptr.get();
        try
        {
            // Init operator chain
            outputer_SV2_Extract_out0->Init();

            // Execute the whole vertex by calling the GetNextRow on top operator
            SV2_Extract_out0 row;
            outputer_SV2_Extract_out0->GetNextRow(row);

            // Close operator chain
            outputer_SV2_Extract_out0->Close();
        }
        catch (const ExceptionWithStack& ex)
        {
            if (vertexExecutionInfo->m_reportStatusFunc != NULL)
            {
                ErrorManager::GetGlobal()->SetError(std::current_exception(), "VertexExecute");
                vertexExecutionInfo->m_reportStatusFunc(vertexExecutionInfo->m_statusReportContext);
            }
            
            std::cout << "Caught exception: " << ex.what() << std::endl << ex.GetStack() << std::endl;
            throw;
        }


        // Write out execution stats
        MemoryManager::GetGlobal()->WriteRuntimeStats(vertexExecutionInfo->m_statsRoot);
        outputer_SV2_Extract_out0->WriteRuntimeStats(vertexExecutionInfo->m_statsRoot);
    }
}
#endif // defined(COMPILE_NATIVE)

#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
#if defined(COMPILE_NATIVE)
#endif // defined(COMPILE_NATIVE)

#endif
#pragma endregion SV2_Extract
#pragma region SV3_Combine
#if defined(COMPILE_SV3_COMBINE) || defined(COMPILE_ALL_VERTICES)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<> 
    class KeyComparePolicy<SV1_Extract_Split_out1,UID_HashJoin_2_FB_0>
    {
    public:
        struct KeyStruct
        {
            int m_ParentProductCategoryID;

            KeyStruct(SV1_Extract_Split_out1 & c) :
                m_ParentProductCategoryID(c.m_ParentProductCategoryID)
            {
            }

            KeyStruct(const SV1_Extract_Split_out1 & c, IncrementalAllocator * alloc) :
                m_ParentProductCategoryID(const_cast<SV1_Extract_Split_out1&>(c).m_ParentProductCategoryID)
            {
            }

            KeyStruct(KeyStruct & c) :
                m_ParentProductCategoryID(c.m_ParentProductCategoryID)
            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) :
                m_ParentProductCategoryID(const_cast<KeyStruct&>(c).m_ParentProductCategoryID)
            {
            }

            KeyStruct() :
                m_ParentProductCategoryID(0)
            {
            }
#if defined(SCOPE_DEBUG)
            friend ostream & operator<<(ostream & os, KeyStruct & row)
            {
                os << "\tParentProductCategoryID:\t" << row.m_ParentProductCategoryID << endl;
              return os;
            }
#endif // defined(SCOPE_DEBUG)
        };

        typedef KeyStruct KeyType;

        static int Compare(SV1_Extract_Split_out1 & row, KeyType & key)
        {
            int r = 0;
            if ((r = ScopeTypeCompare(row.m_ParentProductCategoryID, key.m_ParentProductCategoryID)) != 0)
                return r;
            return r;
        }

        static int Compare(SV1_Extract_Split_out1 * n1, SV1_Extract_Split_out1 * n2)
        {
            int r = 0;
            if ((r = ScopeTypeCompare((*n1).m_ParentProductCategoryID, (*n2).m_ParentProductCategoryID)) != 0)
                return r;
            return r;
        }

        // Key function for MKQsort algorithm
        static __int64 Key(SV1_Extract_Split_out1 * p, int depth)
        {
            if (depth < 1)
            {
                // We only support interger number as MKQsort key for now
                return (__int64)((*p).m_ParentProductCategoryID);
            }

            --depth;

            return 0;
        }

        // End of Key function for MKQSort algorithm
        static bool EofKey(SV1_Extract_Split_out1 * p, int depth)
        {
            --depth;
            if (depth < 0)
                return false;
            return true;
        }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<> 
    class KeyComparePolicy<SV1_Extract_Split_out0,UID_HashJoin_2_FB_1>
    {
    public:
        struct KeyStruct
        {
            int m_ProductCategoryID5;

            KeyStruct(SV1_Extract_Split_out0 & c) :
                m_ProductCategoryID5(c.m_ProductCategoryID5)
            {
            }

            KeyStruct(const SV1_Extract_Split_out0 & c, IncrementalAllocator * alloc) :
                m_ProductCategoryID5(const_cast<SV1_Extract_Split_out0&>(c).m_ProductCategoryID5)
            {
            }

            KeyStruct(KeyStruct & c) :
                m_ProductCategoryID5(c.m_ProductCategoryID5)
            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) :
                m_ProductCategoryID5(const_cast<KeyStruct&>(c).m_ProductCategoryID5)
            {
            }

            KeyStruct() :
                m_ProductCategoryID5(0)
            {
            }
#if defined(SCOPE_DEBUG)
            friend ostream & operator<<(ostream & os, KeyStruct & row)
            {
                os << "\tProductCategoryID5:\t" << row.m_ProductCategoryID5 << endl;
              return os;
            }
#endif // defined(SCOPE_DEBUG)
        };

        typedef KeyStruct KeyType;

        static int Compare(SV1_Extract_Split_out0 & row, KeyType & key)
        {
            int r = 0;
            if ((r = ScopeTypeCompare(row.m_ProductCategoryID5, key.m_ProductCategoryID5)) != 0)
                return r;
            return r;
        }

        static int Compare(SV1_Extract_Split_out0 * n1, SV1_Extract_Split_out0 * n2)
        {
            int r = 0;
            if ((r = ScopeTypeCompare((*n1).m_ProductCategoryID5, (*n2).m_ProductCategoryID5)) != 0)
                return r;
            return r;
        }

        // Key function for MKQsort algorithm
        static __int64 Key(SV1_Extract_Split_out0 * p, int depth)
        {
            if (depth < 1)
            {
                // We only support interger number as MKQsort key for now
                return (__int64)((*p).m_ProductCategoryID5);
            }

            --depth;

            return 0;
        }

        // End of Key function for MKQSort algorithm
        static bool EofKey(SV1_Extract_Split_out0 * p, int depth)
        {
            --depth;
            if (depth < 0)
                return false;
            return true;
        }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<> 
    class KeyComparePolicy<SV1_Extract_Split_out1,UID_HashJoin_2_0>
    {
    public:
        struct KeyStruct
        {
            int m_ParentProductCategoryID;

            KeyStruct(SV1_Extract_Split_out1 & c) :
                m_ParentProductCategoryID(c.m_ParentProductCategoryID)
            {
            }

            KeyStruct(const SV1_Extract_Split_out1 & c, IncrementalAllocator * alloc) :
                m_ParentProductCategoryID(const_cast<SV1_Extract_Split_out1&>(c).m_ParentProductCategoryID)
            {
            }

            KeyStruct(KeyStruct & c) :
                m_ParentProductCategoryID(c.m_ParentProductCategoryID)
            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) :
                m_ParentProductCategoryID(const_cast<KeyStruct&>(c).m_ParentProductCategoryID)
            {
            }

            KeyStruct() :
                m_ParentProductCategoryID(0)
            {
            }
#if defined(SCOPE_DEBUG)
            friend ostream & operator<<(ostream & os, KeyStruct & row)
            {
                os << "\tParentProductCategoryID:\t" << row.m_ParentProductCategoryID << endl;
              return os;
            }
#endif // defined(SCOPE_DEBUG)
        };

        typedef KeyStruct KeyType;

        static int Compare(SV1_Extract_Split_out1 & row, KeyType & key)
        {
            int r = 0;
            if ((r = ScopeTypeCompare(row.m_ParentProductCategoryID, key.m_ParentProductCategoryID)) != 0)
                return r;
            return r;
        }

        static int Compare(SV1_Extract_Split_out1 * n1, SV1_Extract_Split_out1 * n2)
        {
            int r = 0;
            if ((r = ScopeTypeCompare((*n1).m_ParentProductCategoryID, (*n2).m_ParentProductCategoryID)) != 0)
                return r;
            return r;
        }

    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<> 
    class KeyComparePolicy<SV1_Extract_Split_out0,UID_HashJoin_2_1>
    {
    public:
        struct KeyStruct
        {
            int m_ProductCategoryID5;

            KeyStruct(SV1_Extract_Split_out0 & c) :
                m_ProductCategoryID5(c.m_ProductCategoryID5)
            {
            }

            KeyStruct(const SV1_Extract_Split_out0 & c, IncrementalAllocator * alloc) :
                m_ProductCategoryID5(const_cast<SV1_Extract_Split_out0&>(c).m_ProductCategoryID5)
            {
            }

            KeyStruct(KeyStruct & c) :
                m_ProductCategoryID5(c.m_ProductCategoryID5)
            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) :
                m_ProductCategoryID5(const_cast<KeyStruct&>(c).m_ProductCategoryID5)
            {
            }

            KeyStruct() :
                m_ProductCategoryID5(0)
            {
            }
#if defined(SCOPE_DEBUG)
            friend ostream & operator<<(ostream & os, KeyStruct & row)
            {
                os << "\tProductCategoryID5:\t" << row.m_ProductCategoryID5 << endl;
              return os;
            }
#endif // defined(SCOPE_DEBUG)
        };

        typedef KeyStruct KeyType;

        static int Compare(SV1_Extract_Split_out0 & row, KeyType & key)
        {
            int r = 0;
            if ((r = ScopeTypeCompare(row.m_ProductCategoryID5, key.m_ProductCategoryID5)) != 0)
                return r;
            return r;
        }

        static int Compare(SV1_Extract_Split_out0 * n1, SV1_Extract_Split_out0 * n2)
        {
            int r = 0;
            if ((r = ScopeTypeCompare((*n1).m_ProductCategoryID5, (*n2).m_ProductCategoryID5)) != 0)
                return r;
            return r;
        }

    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_NATIVE)
    template<> 
    class CombinerPolicy<UID_HashJoin_2> 
    {
    public:
        typedef KeyComparePolicy<SV1_Extract_Split_out1,UID_HashJoin_2_0> LeftKeyPolicy;
        typedef KeyComparePolicy<SV1_Extract_Split_out0,UID_HashJoin_2_1> RightKeyPolicy;

        static const unsigned MaxPerKeyCrossSizeLimit = 0;

        static LONGLONG JoinerMemQuota()
        {
            return Configuration::GetGlobal().GetMaxInMemoryRowSize();
        }

        // compare key from left and right schema object
        static int Compare(const SV1_Extract_Split_out1 * left, const SV1_Extract_Split_out0 * right)
        {
            int r = 0;
            SV1_Extract_Split_out1 * n1 = const_cast<SV1_Extract_Split_out1 *>(left);
            SV1_Extract_Split_out0 * n2 = const_cast<SV1_Extract_Split_out0 *>(right);

            if ((r = ScopeTypeCompare((*n1).m_ParentProductCategoryID, (*n2).m_ProductCategoryID5)) != 0)
                return r;
            
            // Everything matches
            return 0;
        }

        static void CopyRow(SV1_Extract_Split_out1 * left, SV1_Extract_Split_out0 * right, HashJoin_2_Data0 * out)
        {
                (*out).m_ProductCategoryID1 = (*left).m_ProductCategoryID1;
                (*out).m_Name2 = (*left).m_Name2;
                (*out).m_Name7 = (*right).m_Name7;
        }

        static void CopyLeftRow(SV1_Extract_Split_out1 * left, HashJoin_2_Data0 * out)
        {
            (*out).m_ProductCategoryID1 = (*left).m_ProductCategoryID1;
            (*out).m_Name2 = (*left).m_Name2;
        }

        static void NullifyRightSide(HashJoin_2_Data0 * out)
        {
            (*out).m_Name7.SetNull();
        }

        static void CopyRightRow(SV1_Extract_Split_out0 * right, HashJoin_2_Data0 * out)
        {
            (*out).m_Name7 = (*right).m_Name7;
        }

        static void NullifyLeftSide(HashJoin_2_Data0 * out)
        {
            (*out).m_Name2.SetNull();
        }
    };
#endif // defined(COMPILE_NATIVE)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_NATIVE)
    template<>
    class HashCombinerWithFallbackPolicy<SV1_Extract_Split_out1, SV1_Extract_Split_out0, HashJoin_2_Data0, UID_HashJoin_2>
    {
    public:
        static const int ProbeSorterUID = UID_HashJoin_2_FB_0;
        static const int BuildSorterUID = UID_HashJoin_2_FB_1;
        typedef StdSort<SV1_Extract_Split_out1> ProbeSorterAlgorithm;
        typedef StdSort<SV1_Extract_Split_out0> BuildSorterAlgorithm;
    };

    template <>
    class HashCombinerPolicyV2<SV1_Extract_Split_out1, SV1_Extract_Split_out0, HashJoin_2_Data0, UID_HashJoin_2>
    {
    public:
        typedef HashCombinerPolicyV2<SV1_Extract_Split_out1, SV1_Extract_Split_out0, HashJoin_2_Data0, UID_HashJoin_2> P;

        typedef HashCombineKey_HashJoin_2 KeySchema;
        typedef HashCombineValue_HashJoin_2 ValueSchema;

        // >> define hash & equal functions
        struct Hash
        {
            const INT64 m_seed;

            Hash() : m_seed((INT64)0) {}
            Hash(INT64 seed) : m_seed(seed) {}

            INT64 operator () (const HashCombineKey_HashJoin_2& schema) const
            {
                INT64 result = m_seed;
                    result += ScopeHash(schema.m_ParentProductCategoryID_ProductCategoryID5);
                
                return result;
            }
        };

        struct BuildHash
        {
            const INT64 m_seed;

            BuildHash() : m_seed((INT64)0) {}
            BuildHash(INT64 seed) : m_seed(seed) {}

            INT64 operator () (const SV1_Extract_Split_out0& schema) const
            {
                INT64 result = m_seed;
                    result += ScopeHash(schema.m_ProductCategoryID5);
                
                return result;
            }
        };

        struct ProbeHash
        {
            const INT64 m_seed;

            ProbeHash() : m_seed((INT64)0) {}
            ProbeHash(INT64 seed) : m_seed(seed) {}

            INT64 operator () (const SV1_Extract_Split_out1& schema) const
            {
                INT64 result = m_seed;
                    result += ScopeHash(schema.m_ParentProductCategoryID);
                
                return result;
            }
        };

        struct EqualTo
        {
            bool operator () (const HashCombineKey_HashJoin_2& left, const HashCombineKey_HashJoin_2& right) const
            {
                if (!ScopeTypeCompare_EqualEqual(left.m_ParentProductCategoryID_ProductCategoryID5, right.m_ParentProductCategoryID_ProductCategoryID5)) return false;
                return true;
            }
        };
        struct ProbeEqualTo
        {
            bool operator () (const SV1_Extract_Split_out1& left, const HashCombineKey_HashJoin_2& right) const
            {
                if (!ScopeTypeCompare_EqualEqual(left.m_ParentProductCategoryID, right.m_ParentProductCategoryID_ProductCategoryID5)) return false;
                return true;
            }
        };
        static INT64* Seed()
        {
            static INT64 seed[] { 31607, 40529 };
            return seed;
        }

        static BuildHash* BuildHashes()
        {
            static BuildHash hashes[] { BuildHash(Seed()[0]), BuildHash(Seed()[1]) };
            return hashes;
        }

        static ProbeHash* ProbeHashes()
        {
            static ProbeHash hashes[] { ProbeHash(Seed()[0]), ProbeHash(Seed()[1]) };
            return hashes;
        }

        static const size_t s_seedCnt{ 2 };

        // << define hash & equal functions

        // >> define spilling
        struct Spilling
        {
            static const size_t s_bufferSize{ 4 * 1024 * 1024 }; //4MB
            static const size_t s_bufferCnt{ 2 };
            static const bool s_disable{ false };
            static const bool s_raiseUserError{ false };
        };
        // << define spilling

        // >> define constants
        static const size_t s_memoryQuota{ 2925527038ULL }; // Cosmos default is 2GB

        // the maximum number of buckets in the hashtable is defined as 
        // s_directorySize * 2^s_segmentSizeExponent => 67 108 864
        // s_directorySize has to be a power of two
        static const size_t s_directorySize{ 4096 };
        static const size_t s_segmentSizeExponent{ 14 }; // 16384 bucket per segment

         // number of hashtables used in the join, the data is spilled  one hashtable at a time
        static const size_t s_hashtableCntExponent{ 2 }; // 4 hashtables

         // initial number of buckets per hashtable
         // s_initialSize has to be a power of two
        static const size_t s_initialSize { 128 * (1 << s_segmentSizeExponent) };

        // the length of the segment of the value list is defined as
        // 2^s_valueListSegmentSizeExponent => 1
        static const size_t s_valueListSegmentSizeExponent{ 0 };

        static const size_t s_maxPerKeyCrossSizeLimit{ 0 };
        // << define constants

        typedef STLIncrementalAllocator<char> CharAllocator;
        typedef GranularList<ValueSchema*, s_valueListSegmentSizeExponent, CharAllocator> UnderlyingValue;
        typedef UnderlyingValue Value;
        typedef Value::Iterator ValueIterator;

        template <typename Item, typename CharAllocator>
        struct HashtablePolicy : public SlimHashtableLayoutPolicy<Item, CharAllocator>::Type
        {
            struct BucketArrayTraits
            {
                static const size_t s_directorySize{ P::s_directorySize };
                static const size_t s_segmentSizeExponent{ P::s_segmentSizeExponent };
            };
        };

        typedef SlimHashMap<KeySchema, Value, HashtablePolicy, Hash, EqualTo> Hashtable;

        static const HashCombinerValuesPerKeyCountV2 s_valuesPerKeyCount = HashCombinerValuesPerKeyCountV2::MANY;

        static void UpdateValueList(CharAllocator& alloc, Value& valueList, ValueSchema* value)
        {
            valueList.EmplaceFront(alloc, value);
        }

        static ValueIterator ValueListBegin(Value& valueList)
        {
            return valueList.Begin();
        }
        
        static ValueIterator ValueListEnd(Value& valueList)
        {
            return valueList.End();
        }
        
        static size_t ValueListSize(const Value& valueList)
        {
            return valueList.Size();
        }

        static size_t IncrementValueListStats(Value& valueList)
        {
            return 0;
        }

    
        // Shallow copy probe and build schema fields to the output
        static void CopyBoth(const SV1_Extract_Split_out1 & probe, const ValueSchema * build, HashJoin_2_Data0 & output)
        {
            // copy probe
            output.m_ProductCategoryID1 = probe.m_ProductCategoryID1;
            output.m_Name2 = probe.m_Name2;

            // copy build
            output.m_Name7 = (*build).m_Name7;
        }

        // Shallow copy probe schema fields to the output and nullify all the rest
        static void CopyProbeAndNullifyBuild(const SV1_Extract_Split_out1 & probe, HashJoin_2_Data0 & output)
        {
            // copy probe
            output.m_ProductCategoryID1 = probe.m_ProductCategoryID1;
            output.m_Name2 = probe.m_Name2;

            // nullify build
            output.m_Name7.SetNull();
        }

         static void DeepCopyBuildRowToKeyValue(const SV1_Extract_Split_out0 & row, KeySchema & key, ValueSchema * value, IncrementalAllocator* alloc)
         {
            // copy key
           key.m_ParentProductCategoryID_ProductCategoryID5 = row.m_ProductCategoryID5;
            // copy value
            FString tmp_Name7(row.m_Name7, alloc);
            (*value).m_Name7 = tmp_Name7;
         }

         static void CopyKeyValueToBuildRow(const KeySchema & key, const ValueSchema * value, SV1_Extract_Split_out0 & row)
         {
            // copy key
           row.m_ProductCategoryID5 = key.m_ParentProductCategoryID_ProductCategoryID5;
            // copy value
            row.m_Name7 = (*value).m_Name7;
         }

        static void InsertOrUpdate(Hashtable& ht, const SV1_Extract_Split_out0 & row, INT64 hash, IncrementalAllocator& alloc, CharAllocator& calloc)
        {
            KeySchema key;
            ValueSchema* value = new (alloc.Allocate(sizeof(ValueSchema))) ValueSchema();
            DeepCopyBuildRowToKeyValue(row, key, value, &alloc);

            Value vlist;
            auto it = ht.InsertWithPrecomputedHash(hash, { key, vlist });
            UpdateValueList(calloc, it.first->second, value);
        }
    };

#endif // defined(COMPILE_NATIVE)

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<> 
    class KeyComparePolicy<SV2_Extract_out0,UID_HashJoin_4_FB_0>
    {
    public:
        struct KeyStruct
        {
            int m_ProductCategoryID;

            KeyStruct(SV2_Extract_out0 & c) :
                m_ProductCategoryID(c.m_ProductCategoryID)
            {
            }

            KeyStruct(const SV2_Extract_out0 & c, IncrementalAllocator * alloc) :
                m_ProductCategoryID(const_cast<SV2_Extract_out0&>(c).m_ProductCategoryID)
            {
            }

            KeyStruct(KeyStruct & c) :
                m_ProductCategoryID(c.m_ProductCategoryID)
            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) :
                m_ProductCategoryID(const_cast<KeyStruct&>(c).m_ProductCategoryID)
            {
            }

            KeyStruct() :
                m_ProductCategoryID(0)
            {
            }
#if defined(SCOPE_DEBUG)
            friend ostream & operator<<(ostream & os, KeyStruct & row)
            {
                os << "\tProductCategoryID:\t" << row.m_ProductCategoryID << endl;
              return os;
            }
#endif // defined(SCOPE_DEBUG)
        };

        typedef KeyStruct KeyType;

        static int Compare(SV2_Extract_out0 & row, KeyType & key)
        {
            int r = 0;
            if ((r = ScopeTypeCompare(row.m_ProductCategoryID, key.m_ProductCategoryID)) != 0)
                return r;
            return r;
        }

        static int Compare(SV2_Extract_out0 * n1, SV2_Extract_out0 * n2)
        {
            int r = 0;
            if ((r = ScopeTypeCompare((*n1).m_ProductCategoryID, (*n2).m_ProductCategoryID)) != 0)
                return r;
            return r;
        }

        // Key function for MKQsort algorithm
        static __int64 Key(SV2_Extract_out0 * p, int depth)
        {
            if (depth < 1)
            {
                // We only support interger number as MKQsort key for now
                return (__int64)((*p).m_ProductCategoryID);
            }

            --depth;

            return 0;
        }

        // End of Key function for MKQSort algorithm
        static bool EofKey(SV2_Extract_out0 * p, int depth)
        {
            --depth;
            if (depth < 0)
                return false;
            return true;
        }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<> 
    class KeyComparePolicy<HashJoin_2_Data0,UID_HashJoin_4_FB_1>
    {
    public:
        struct KeyStruct
        {
            int m_ProductCategoryID1;

            KeyStruct(HashJoin_2_Data0 & c) :
                m_ProductCategoryID1(c.m_ProductCategoryID1)
            {
            }

            KeyStruct(const HashJoin_2_Data0 & c, IncrementalAllocator * alloc) :
                m_ProductCategoryID1(const_cast<HashJoin_2_Data0&>(c).m_ProductCategoryID1)
            {
            }

            KeyStruct(KeyStruct & c) :
                m_ProductCategoryID1(c.m_ProductCategoryID1)
            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) :
                m_ProductCategoryID1(const_cast<KeyStruct&>(c).m_ProductCategoryID1)
            {
            }

            KeyStruct() :
                m_ProductCategoryID1(0)
            {
            }
#if defined(SCOPE_DEBUG)
            friend ostream & operator<<(ostream & os, KeyStruct & row)
            {
                os << "\tProductCategoryID1:\t" << row.m_ProductCategoryID1 << endl;
              return os;
            }
#endif // defined(SCOPE_DEBUG)
        };

        typedef KeyStruct KeyType;

        static int Compare(HashJoin_2_Data0 & row, KeyType & key)
        {
            int r = 0;
            if ((r = ScopeTypeCompare(row.m_ProductCategoryID1, key.m_ProductCategoryID1)) != 0)
                return r;
            return r;
        }

        static int Compare(HashJoin_2_Data0 * n1, HashJoin_2_Data0 * n2)
        {
            int r = 0;
            if ((r = ScopeTypeCompare((*n1).m_ProductCategoryID1, (*n2).m_ProductCategoryID1)) != 0)
                return r;
            return r;
        }

        // Key function for MKQsort algorithm
        static __int64 Key(HashJoin_2_Data0 * p, int depth)
        {
            if (depth < 1)
            {
                // We only support interger number as MKQsort key for now
                return (__int64)((*p).m_ProductCategoryID1);
            }

            --depth;

            return 0;
        }

        // End of Key function for MKQSort algorithm
        static bool EofKey(HashJoin_2_Data0 * p, int depth)
        {
            --depth;
            if (depth < 0)
                return false;
            return true;
        }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<> 
    class KeyComparePolicy<SV2_Extract_out0,UID_HashJoin_4_0>
    {
    public:
        struct KeyStruct
        {
            int m_ProductCategoryID;

            KeyStruct(SV2_Extract_out0 & c) :
                m_ProductCategoryID(c.m_ProductCategoryID)
            {
            }

            KeyStruct(const SV2_Extract_out0 & c, IncrementalAllocator * alloc) :
                m_ProductCategoryID(const_cast<SV2_Extract_out0&>(c).m_ProductCategoryID)
            {
            }

            KeyStruct(KeyStruct & c) :
                m_ProductCategoryID(c.m_ProductCategoryID)
            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) :
                m_ProductCategoryID(const_cast<KeyStruct&>(c).m_ProductCategoryID)
            {
            }

            KeyStruct() :
                m_ProductCategoryID(0)
            {
            }
#if defined(SCOPE_DEBUG)
            friend ostream & operator<<(ostream & os, KeyStruct & row)
            {
                os << "\tProductCategoryID:\t" << row.m_ProductCategoryID << endl;
              return os;
            }
#endif // defined(SCOPE_DEBUG)
        };

        typedef KeyStruct KeyType;

        static int Compare(SV2_Extract_out0 & row, KeyType & key)
        {
            int r = 0;
            if ((r = ScopeTypeCompare(row.m_ProductCategoryID, key.m_ProductCategoryID)) != 0)
                return r;
            return r;
        }

        static int Compare(SV2_Extract_out0 * n1, SV2_Extract_out0 * n2)
        {
            int r = 0;
            if ((r = ScopeTypeCompare((*n1).m_ProductCategoryID, (*n2).m_ProductCategoryID)) != 0)
                return r;
            return r;
        }

    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<> 
    class KeyComparePolicy<HashJoin_2_Data0,UID_HashJoin_4_1>
    {
    public:
        struct KeyStruct
        {
            int m_ProductCategoryID1;

            KeyStruct(HashJoin_2_Data0 & c) :
                m_ProductCategoryID1(c.m_ProductCategoryID1)
            {
            }

            KeyStruct(const HashJoin_2_Data0 & c, IncrementalAllocator * alloc) :
                m_ProductCategoryID1(const_cast<HashJoin_2_Data0&>(c).m_ProductCategoryID1)
            {
            }

            KeyStruct(KeyStruct & c) :
                m_ProductCategoryID1(c.m_ProductCategoryID1)
            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) :
                m_ProductCategoryID1(const_cast<KeyStruct&>(c).m_ProductCategoryID1)
            {
            }

            KeyStruct() :
                m_ProductCategoryID1(0)
            {
            }
#if defined(SCOPE_DEBUG)
            friend ostream & operator<<(ostream & os, KeyStruct & row)
            {
                os << "\tProductCategoryID1:\t" << row.m_ProductCategoryID1 << endl;
              return os;
            }
#endif // defined(SCOPE_DEBUG)
        };

        typedef KeyStruct KeyType;

        static int Compare(HashJoin_2_Data0 & row, KeyType & key)
        {
            int r = 0;
            if ((r = ScopeTypeCompare(row.m_ProductCategoryID1, key.m_ProductCategoryID1)) != 0)
                return r;
            return r;
        }

        static int Compare(HashJoin_2_Data0 * n1, HashJoin_2_Data0 * n2)
        {
            int r = 0;
            if ((r = ScopeTypeCompare((*n1).m_ProductCategoryID1, (*n2).m_ProductCategoryID1)) != 0)
                return r;
            return r;
        }

    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_NATIVE)
    template<> 
    class CombinerPolicy<UID_HashJoin_4> 
    {
    public:
        typedef KeyComparePolicy<SV2_Extract_out0,UID_HashJoin_4_0> LeftKeyPolicy;
        typedef KeyComparePolicy<HashJoin_2_Data0,UID_HashJoin_4_1> RightKeyPolicy;

        static const unsigned MaxPerKeyCrossSizeLimit = 0;

        static LONGLONG JoinerMemQuota()
        {
            return Configuration::GetGlobal().GetMaxInMemoryRowSize();
        }

        // compare key from left and right schema object
        static int Compare(const SV2_Extract_out0 * left, const HashJoin_2_Data0 * right)
        {
            int r = 0;
            SV2_Extract_out0 * n1 = const_cast<SV2_Extract_out0 *>(left);
            HashJoin_2_Data0 * n2 = const_cast<HashJoin_2_Data0 *>(right);

            if ((r = ScopeTypeCompare((*n1).m_ProductCategoryID, (*n2).m_ProductCategoryID1)) != 0)
                return r;
            
            // Everything matches
            return 0;
        }

        static void CopyRow(SV2_Extract_out0 * left, HashJoin_2_Data0 * right, HashJoin_4_Data0 * out)
        {
                (*out).m_ProductID = (*left).m_ProductID;
                (*out).m_Name = (*left).m_Name;
                (*out).m_Name2 = (*right).m_Name2;
                (*out).m_Name7 = (*right).m_Name7;
        }

        static void CopyLeftRow(SV2_Extract_out0 * left, HashJoin_4_Data0 * out)
        {
            (*out).m_ProductID = (*left).m_ProductID;
            (*out).m_Name = (*left).m_Name;
        }

        static void NullifyRightSide(HashJoin_4_Data0 * out)
        {
            (*out).m_Name2.SetNull();
            (*out).m_Name7.SetNull();
        }

        static void CopyRightRow(HashJoin_2_Data0 * right, HashJoin_4_Data0 * out)
        {
            (*out).m_Name2 = (*right).m_Name2;
            (*out).m_Name7 = (*right).m_Name7;
        }

        static void NullifyLeftSide(HashJoin_4_Data0 * out)
        {
            (*out).m_Name.SetNull();
        }
    };
#endif // defined(COMPILE_NATIVE)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_NATIVE)
    template<>
    class HashCombinerWithFallbackPolicy<SV2_Extract_out0, HashJoin_2_Data0, HashJoin_4_Data0, UID_HashJoin_4>
    {
    public:
        static const int ProbeSorterUID = UID_HashJoin_4_FB_0;
        static const int BuildSorterUID = UID_HashJoin_4_FB_1;
        typedef StdSort<SV2_Extract_out0> ProbeSorterAlgorithm;
        typedef StdSort<HashJoin_2_Data0> BuildSorterAlgorithm;
    };

    template <>
    class HashCombinerPolicyV2<SV2_Extract_out0, HashJoin_2_Data0, HashJoin_4_Data0, UID_HashJoin_4>
    {
    public:
        typedef HashCombinerPolicyV2<SV2_Extract_out0, HashJoin_2_Data0, HashJoin_4_Data0, UID_HashJoin_4> P;

        typedef HashCombineKey_HashJoin_4 KeySchema;
        typedef HashCombineValue_HashJoin_4 ValueSchema;

        // >> define hash & equal functions
        struct Hash
        {
            const INT64 m_seed;

            Hash() : m_seed((INT64)0) {}
            Hash(INT64 seed) : m_seed(seed) {}

            INT64 operator () (const HashCombineKey_HashJoin_4& schema) const
            {
                INT64 result = m_seed;
                    result += ScopeHash(schema.m_ProductCategoryID_ProductCategoryID1);
                
                return result;
            }
        };

        struct BuildHash
        {
            const INT64 m_seed;

            BuildHash() : m_seed((INT64)0) {}
            BuildHash(INT64 seed) : m_seed(seed) {}

            INT64 operator () (const HashJoin_2_Data0& schema) const
            {
                INT64 result = m_seed;
                    result += ScopeHash(schema.m_ProductCategoryID1);
                
                return result;
            }
        };

        struct ProbeHash
        {
            const INT64 m_seed;

            ProbeHash() : m_seed((INT64)0) {}
            ProbeHash(INT64 seed) : m_seed(seed) {}

            INT64 operator () (const SV2_Extract_out0& schema) const
            {
                INT64 result = m_seed;
                    result += ScopeHash(schema.m_ProductCategoryID);
                
                return result;
            }
        };

        struct EqualTo
        {
            bool operator () (const HashCombineKey_HashJoin_4& left, const HashCombineKey_HashJoin_4& right) const
            {
                if (!ScopeTypeCompare_EqualEqual(left.m_ProductCategoryID_ProductCategoryID1, right.m_ProductCategoryID_ProductCategoryID1)) return false;
                return true;
            }
        };
        struct ProbeEqualTo
        {
            bool operator () (const SV2_Extract_out0& left, const HashCombineKey_HashJoin_4& right) const
            {
                if (!ScopeTypeCompare_EqualEqual(left.m_ProductCategoryID, right.m_ProductCategoryID_ProductCategoryID1)) return false;
                return true;
            }
        };
        static INT64* Seed()
        {
            static INT64 seed[] { 31607, 40529 };
            return seed;
        }

        static BuildHash* BuildHashes()
        {
            static BuildHash hashes[] { BuildHash(Seed()[0]), BuildHash(Seed()[1]) };
            return hashes;
        }

        static ProbeHash* ProbeHashes()
        {
            static ProbeHash hashes[] { ProbeHash(Seed()[0]), ProbeHash(Seed()[1]) };
            return hashes;
        }

        static const size_t s_seedCnt{ 2 };

        // << define hash & equal functions

        // >> define spilling
        struct Spilling
        {
            static const size_t s_bufferSize{ 4 * 1024 * 1024 }; //4MB
            static const size_t s_bufferCnt{ 2 };
            static const bool s_disable{ false };
            static const bool s_raiseUserError{ false };
        };
        // << define spilling

        // >> define constants
        static const size_t s_memoryQuota{ 2925527038ULL }; // Cosmos default is 2GB

        // the maximum number of buckets in the hashtable is defined as 
        // s_directorySize * 2^s_segmentSizeExponent => 67 108 864
        // s_directorySize has to be a power of two
        static const size_t s_directorySize{ 4096 };
        static const size_t s_segmentSizeExponent{ 14 }; // 16384 bucket per segment

         // number of hashtables used in the join, the data is spilled  one hashtable at a time
        static const size_t s_hashtableCntExponent{ 2 }; // 4 hashtables

         // initial number of buckets per hashtable
         // s_initialSize has to be a power of two
        static const size_t s_initialSize { 128 * (1 << s_segmentSizeExponent) };

        // the length of the segment of the value list is defined as
        // 2^s_valueListSegmentSizeExponent => 1
        static const size_t s_valueListSegmentSizeExponent{ 0 };

        static const size_t s_maxPerKeyCrossSizeLimit{ 0 };
        // << define constants

        typedef STLIncrementalAllocator<char> CharAllocator;
        typedef GranularList<ValueSchema*, s_valueListSegmentSizeExponent, CharAllocator> UnderlyingValue;
        typedef UnderlyingValue Value;
        typedef Value::Iterator ValueIterator;

        template <typename Item, typename CharAllocator>
        struct HashtablePolicy : public SlimHashtableLayoutPolicy<Item, CharAllocator>::Type
        {
            struct BucketArrayTraits
            {
                static const size_t s_directorySize{ P::s_directorySize };
                static const size_t s_segmentSizeExponent{ P::s_segmentSizeExponent };
            };
        };

        typedef SlimHashMap<KeySchema, Value, HashtablePolicy, Hash, EqualTo> Hashtable;

        static const HashCombinerValuesPerKeyCountV2 s_valuesPerKeyCount = HashCombinerValuesPerKeyCountV2::MANY;

        static void UpdateValueList(CharAllocator& alloc, Value& valueList, ValueSchema* value)
        {
            valueList.EmplaceFront(alloc, value);
        }

        static ValueIterator ValueListBegin(Value& valueList)
        {
            return valueList.Begin();
        }
        
        static ValueIterator ValueListEnd(Value& valueList)
        {
            return valueList.End();
        }
        
        static size_t ValueListSize(const Value& valueList)
        {
            return valueList.Size();
        }

        static size_t IncrementValueListStats(Value& valueList)
        {
            return 0;
        }

    
        // Shallow copy probe and build schema fields to the output
        static void CopyBoth(const SV2_Extract_out0 & probe, const ValueSchema * build, HashJoin_4_Data0 & output)
        {
            // copy probe
            output.m_ProductID = probe.m_ProductID;
            output.m_Name = probe.m_Name;

            // copy build
            output.m_Name2 = (*build).m_Name2;
            output.m_Name7 = (*build).m_Name7;
        }

        // Shallow copy probe schema fields to the output and nullify all the rest
        static void CopyProbeAndNullifyBuild(const SV2_Extract_out0 & probe, HashJoin_4_Data0 & output)
        {
            // copy probe
            output.m_ProductID = probe.m_ProductID;
            output.m_Name = probe.m_Name;

            // nullify build
            output.m_Name2.SetNull();
            output.m_Name7.SetNull();
        }

         static void DeepCopyBuildRowToKeyValue(const HashJoin_2_Data0 & row, KeySchema & key, ValueSchema * value, IncrementalAllocator* alloc)
         {
            // copy key
           key.m_ProductCategoryID_ProductCategoryID1 = row.m_ProductCategoryID1;
            // copy value
            FString tmp_Name2(row.m_Name2, alloc);
            (*value).m_Name2 = tmp_Name2;
            FString tmp_Name7(row.m_Name7, alloc);
            (*value).m_Name7 = tmp_Name7;
         }

         static void CopyKeyValueToBuildRow(const KeySchema & key, const ValueSchema * value, HashJoin_2_Data0 & row)
         {
            // copy key
           row.m_ProductCategoryID1 = key.m_ProductCategoryID_ProductCategoryID1;
            // copy value
            row.m_Name2 = (*value).m_Name2;
            row.m_Name7 = (*value).m_Name7;
         }

        static void InsertOrUpdate(Hashtable& ht, const HashJoin_2_Data0 & row, INT64 hash, IncrementalAllocator& alloc, CharAllocator& calloc)
        {
            KeySchema key;
            ValueSchema* value = new (alloc.Allocate(sizeof(ValueSchema))) ValueSchema();
            DeepCopyBuildRowToKeyValue(row, key, value, &alloc);

            Value vlist;
            auto it = ht.InsertWithPrecomputedHash(hash, { key, vlist });
            UpdateValueList(calloc, it.first->second, value);
        }
    };

#endif // defined(COMPILE_NATIVE)

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

    static const char * StringTable_Process_5 [] =
    {
        "ProductID",
        "Name",
        "Name2",
        "Name7",
        "\"*** After Last Expression ***\"",
    };

    template<>
    class RowTransformPolicy<HashJoin_4_Data0, Process_5_Data0, UID_Process_5>
    {
    public:

        static bool FilterTransformRow(HashJoin_4_Data0 & input, Process_5_Data0 & output, IncrementalAllocator * alloc)
        {

            int exceptionIndex = 0;
            try
            {
                    output.m_ProductKey = input.m_ProductID;
                    exceptionIndex++;
                    output.m_ProductName = input.m_Name;
                    exceptionIndex++;
                    output.m_Cat1 = input.m_Name2;
                    exceptionIndex++;
                    output.m_Cat2 = input.m_Name7;
                    exceptionIndex++;
                    return true;
                    }
                    catch(...)
                    {
                        std::throw_with_nested(RuntimeExpressionException(StringTable_Process_5[exceptionIndex]));
                    }
    }

            #pragma warning(push)
            #pragma warning(disable: 4100) // 'alloc': unreferenced formal parameter
            static void InitializeStatics(IncrementalAllocator * alloc)
            {
            #pragma warning(pop)
            }
    
            // get operator resource requirements
            static OperatorRequirements GetOperatorRequirements()
            {
                return OperatorRequirements().AddMemoryInRows(1, 1);
            }
        };
    

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

    template<> 
    class TextOutputPolicy<Process_5_Data0, UID_SV3_Combine_out0>
    {
    public:

        static void Serialize(TextOutputStream<TextOutputStreamTraitsConst<',', '\0', false, false, true, false, true, UTF8, true, CharFormat_uint16>, CosmosOutput> * output, Process_5_Data0 & row)
        {
            output->Write<int,false>(row.m_ProductKey);
            output->WriteDelimiter();
            if (!row.m_ProductName.IsNull())
            {
                output->Write<FString,true>(row.m_ProductName);
            }
            output->WriteDelimiter();
            if (!row.m_Cat1.IsNull())
            {
                output->Write<FString,true>(row.m_Cat1);
            }
            output->WriteDelimiter();
            if (!row.m_Cat2.IsNull())
            {
                output->Write<FString,true>(row.m_Cat2);
            }
            output->WriteNewLine();
        }

        static void SerializeHeader(TextOutputStream<TextOutputStreamTraitsConst<',', '\0', false, false, true, false, true, UTF8, true, CharFormat_uint16>, CosmosOutput> * output)
        {
            output->Write<string,true>(FString("ProductKey", 10));
            output->WriteDelimiter();
            output->Write<string,true>(FString("ProductName", 11));
            output->WriteDelimiter();
            output->Write<string,true>(FString("Cat1", 4));
            output->WriteDelimiter();
            output->Write<string,true>(FString("Cat2", 4));
            output->WriteNewLine();
        }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



#if defined(COMPILE_NATIVE)
namespace ScopeGeneratedClasses
{
    extern "C" __declspec(dllexport) void __stdcall SV3_Combine_execute(std::string * argv, int argc, InputFileInfo* inputs, int inputCnt, OutputFileInfo* outputs, int outputCnt, VertexExecutionInfo * vertexExecutionInfo)
    {
#ifdef USE_SSE4_2
        // check CPUID to make sure this machine supports SSE4_2 instructions
        // - this is incase we download a cluster vertex and try and debug it on a machine that doesn't support these instructions
        int cpuInfo[4];
        __cpuid(cpuInfo, 0x00000001);
        //Array index | Bit range | Description 
        // 2          | 20        | SSE4.2 extensions
        if ((cpuInfo[2] & (1 << 20)) == 0)
        {
            throw RuntimeException(E_USER_ERROR, "Please recompile __ScopeCodeGenEngine__.dll without /DUSE_SSE4_2");
            return;
        }
#endif

        Configuration::Create(ET_Azure, GetCompilerSettings(), vertexExecutionInfo);
        SIZE_T x_inputBufSize, x_outputBufSize, x_inputVirtualMemoryLimit;
        int    x_inputBufCnt, x_outputBufCnt;
        
        MemoryManager::CalculateIOBufferSize(inputCnt, outputCnt, MemoryManager::x_vertexMemoryLimit, MemoryManager::x_vertexReserveMemory, x_inputBufSize, x_inputBufCnt, x_outputBufSize, x_outputBufCnt, x_inputVirtualMemoryLimit, false);

        const bool IsNativeOnlyVertex = true;
        // Define extractor type and construct object
        typedef Extractor<SV1_Extract_Split_out1, BinaryExtractPolicy<SV1_Extract_Split_out1>, BinaryInputStream> ExtractorType1_SV3_Combine;        
        unique_ptr<ExtractorType1_SV3_Combine> extractor_0_ptr= make_unique<ExtractorType1_SV3_Combine>(inputs[1], false, x_inputBufSize, x_inputBufCnt, x_inputVirtualMemoryLimit, UID_SV1_Extract_Split_out1);
        ExtractorType1_SV3_Combine * extractor_0 = extractor_0_ptr.get();
        ULONG extractor_0_count = 1;
        // Define extractor type and construct object
        typedef Extractor<SV1_Extract_Split_out0, BinaryExtractPolicy<SV1_Extract_Split_out0>, BinaryInputStream> ExtractorType2_SV3_Combine;        
        unique_ptr<ExtractorType2_SV3_Combine> extractor_1_ptr= make_unique<ExtractorType2_SV3_Combine>(inputs[0], false, x_inputBufSize, x_inputBufCnt, x_inputVirtualMemoryLimit, UID_SV1_Extract_Split_out0);
        ExtractorType2_SV3_Combine * extractor_1 = extractor_1_ptr.get();
        ULONG extractor_1_count = 1;
        // Define extractor type and construct object
        typedef Extractor<SV2_Extract_out0, BinaryExtractPolicy<SV2_Extract_out0>, BinaryInputStream> ExtractorType3_SV3_Combine;        
        unique_ptr<ExtractorType3_SV3_Combine> extractor_2_ptr= make_unique<ExtractorType3_SV3_Combine>(inputs[2], false, x_inputBufSize, x_inputBufCnt, x_inputVirtualMemoryLimit, UID_SV2_Extract_out0);
        ExtractorType3_SV3_Combine * extractor_2 = extractor_2_ptr.get();
        ULONG extractor_2_count = 1;

        // Define the combiner operator
        typedef HashCombinerWithFallback<ExtractorType1_SV3_Combine, SV1_Extract_Split_out1, ExtractorType2_SV3_Combine, SV1_Extract_Split_out0, HashJoin_2_Data0, HashInnerJoinerV2, InnerJoiner, UID_HashJoin_2> CombinerType_HashJoin_2;
        unique_ptr<CombinerType_HashJoin_2> combiner_HashJoin_2_ptr;
        combiner_HashJoin_2_ptr.reset(new CombinerType_HashJoin_2(extractor_0, extractor_1, UID_HashJoin_2, 1));

        CombinerType_HashJoin_2 * combiner_HashJoin_2 = combiner_HashJoin_2_ptr.get();
        ULONG combiner_HashJoin_2_count = 1;

        // Define the combiner operator
        typedef HashCombinerWithFallback<ExtractorType3_SV3_Combine, SV2_Extract_out0, CombinerType_HashJoin_2, HashJoin_2_Data0, HashJoin_4_Data0, HashInnerJoinerV2, InnerJoiner, UID_HashJoin_4> CombinerType_HashJoin_4;
        unique_ptr<CombinerType_HashJoin_4> combiner_HashJoin_4_ptr;
        combiner_HashJoin_4_ptr.reset(new CombinerType_HashJoin_4(extractor_2, combiner_HashJoin_2, UID_HashJoin_4, 1));

        CombinerType_HashJoin_4 * combiner_HashJoin_4 = combiner_HashJoin_4_ptr.get();
        ULONG combiner_HashJoin_4_count = 1;
        // Define the type of the operator
        typedef FilterTransformer<CombinerType_HashJoin_4, HashJoin_4_Data0, Process_5_Data0, UID_Process_5> FilterTransformerType_Process_5;
        // Construct operator and initialize it.
        unique_ptr<FilterTransformerType_Process_5> filterTransformer_Process_5_ptr (new FilterTransformerType_Process_5(combiner_HashJoin_4, UID_Process_5));
        FilterTransformerType_Process_5 * filterTransformer_Process_5 = filterTransformer_Process_5_ptr.get();
        ULONG filterTransformer_Process_5_count = 1;
        // Define outputer type
        typedef Outputer<FilterTransformerType_Process_5, Process_5_Data0, TextOutputPolicy<Process_5_Data0, UID_SV3_Combine_out0>, TextOutputStream<TextOutputStreamTraitsConst<',', '\0', false, false, true, false, true, UTF8, true, CharFormat_uint16>, CosmosOutput>, false> OutputerType4_SV3_Combine;
        // Construct operator and initialize it
        unique_ptr<OutputerType4_SV3_Combine> outputer_SV3_Combine_out0_ptr(new OutputerType4_SV3_Combine(filterTransformer_Process_5, outputs[0].outputFileName, outputs[0].isFirstOutputPiece, x_outputBufSize, x_outputBufCnt, OutputStreamParameters(',', "\r\n", '\0', static_cast<const char*>(__nullptr), false, false, true, false, "O", UTF8, true, CharFormat_uint16), UID_SV3_Combine_out0));
        OutputerType4_SV3_Combine * outputer_SV3_Combine_out0 = outputer_SV3_Combine_out0_ptr.get();
        try
        {
            // Init operator chain
            outputer_SV3_Combine_out0->Init();

            // Execute the whole vertex by calling the GetNextRow on top operator
            Process_5_Data0 row;
            outputer_SV3_Combine_out0->GetNextRow(row);

            // Close operator chain
            outputer_SV3_Combine_out0->Close();
        }
        catch (const ExceptionWithStack& ex)
        {
            if (vertexExecutionInfo->m_reportStatusFunc != NULL)
            {
                ErrorManager::GetGlobal()->SetError(std::current_exception(), "VertexExecute");
                vertexExecutionInfo->m_reportStatusFunc(vertexExecutionInfo->m_statusReportContext);
            }
            
            std::cout << "Caught exception: " << ex.what() << std::endl << ex.GetStack() << std::endl;
            throw;
        }


        // Write out execution stats
        MemoryManager::GetGlobal()->WriteRuntimeStats(vertexExecutionInfo->m_statsRoot);
        outputer_SV3_Combine_out0->WriteRuntimeStats(vertexExecutionInfo->m_statsRoot);
    }
}
#endif // defined(COMPILE_NATIVE)

#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
#if defined(COMPILE_NATIVE)
#endif // defined(COMPILE_NATIVE)

#endif
#pragma endregion SV3_Combine
// Empty footer
