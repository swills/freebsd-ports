# $FreeBSD: head/sysutils/ansible26/Makefile 482130 2018-10-15 00:58:09Z lifanov $

PORTVERSION=	2.6.5
PKGNAMESUFFIX=	26

CONFLICTS=	ansible-* \
		ansible1-* \
		ansible23-* \
		ansible24-* \
		ansible25-*

MASTERDIR=	${.CURDIR}/../ansible
DISTINFO_FILE=	${.CURDIR}/distinfo

EXTRA_PATCHES=	${FILESDIR}/extra-patch-sesu

.include "${MASTERDIR}/Makefile"
