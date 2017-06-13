# Created by: Mij <mij@bitchx.it>
# $FreeBSD: head/security/sshguard-pf/Makefile 421094 2016-08-29 19:55:47Z feld $

PKGNAMESUFFIX=	-pf

COMMENT=	Protect hosts from brute force attacks against ssh and other services using pf

CONFLICTS=	sshguard-ipfw-1.* sshguard-null-1.*

SSHGUARDFW=	pf
MASTERDIR=	${.CURDIR}/../sshguard

.include "${MASTERDIR}/Makefile"
