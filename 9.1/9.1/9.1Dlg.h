
// 9.1Dlg.h : ͷ�ļ�
//

#pragma once
#include "afxwin.h"


// CMy91Dlg �Ի���
class CMy91Dlg : public CDialogEx
{
// ����
public:
	CMy91Dlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MY91_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	int nCurSel;
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CListBox m;
	afx_msg void OnLbnSelchangeList1();
	afx_msg void OnBnClickedButton1();
	CEdit edit_m;
	afx_msg void OnBnClickedOk();
};
