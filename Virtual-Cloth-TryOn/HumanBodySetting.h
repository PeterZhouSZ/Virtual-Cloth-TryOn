#pragma once
#include "afxcmn.h"
#include "HumanBodySettingMain.h"
#include "HumanBodySettingGender.h"


// HumanBodySetting �Ի���

class HumanBodySetting : public CDialogEx
{
	DECLARE_DYNAMIC(HumanBodySetting)

public:
	HumanBodySetting(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~HumanBodySetting();

// �Ի�������
	enum { IDD = IDD_HUMAN_BODY_SETTING };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CTabCtrl m_HumanBodyTab;
	HumanBodySettingMain m_HumanBodySettingMain;
	HumanBodySettingGender m_HumanBodySettingGender;
	afx_msg void OnBnClickedOk();
	afx_msg void OnTcnSelchangeHumanBodyTab(NMHDR *pNMHDR, LRESULT *pResult);
	virtual BOOL OnInitDialog();
};