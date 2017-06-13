# Created by: Mij <mij@bitchx.it>
# $FreeBSD: head/security/sshguard-ipfw/Makefile 421094 2016-08-29 19:55:47Z feld $

PKGNAMESUFFIX=	-ipfw

COMMENT=	Protect hosts from brute force attacks against ssh and other services using ipfw

CONFLICTS=	sshguard-pf-1.* sshguard-null-1.*

SSHGUARDFW=	ipfw
MASTERDIR=	${.CURDIR}/../sshguard

.include "${MASTERDIR}/Makefile"
