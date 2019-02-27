//Find
		const char *	GetName()
		
///Change
		const char *	GetName()
		{ 
#ifdef RENEWAL_BOOK_NAME
			if (!m_pProto) return nullptr;
			std::string name = CSkillManager::instance().GetSkillName(GetSocket(0)) + ' ' + m_pProto->szLocaleName;
			return m_dwVnum == 50300 ? name.c_str() : m_pProto->szLocaleName;
#else
			return m_pProto ? m_pProto->szLocaleName : nullptr; 
#endif
		}