
// StreamMediaServiceDlg.h : ͷ�ļ�
//

#pragma once


// CStreamMediaServiceDlg �Ի���
class CStreamMediaServiceDlg : public CDialogEx
{
// ����
public:
	CStreamMediaServiceDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_STREAMMEDIASERVICE_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
};
