# Created by: rflynn@acsalaska.net
# $FreeBSD: head/net/nss-pam-ldapd-sasl/Makefile 424560 2016-10-24 10:18:50Z mat $

PORTNAME=	nss-pam-ldapd
PKGNAMESUFFIX=	-sasl

MAINTAINER=	zi@FreeBSD.org
COMMENT=	Advanced fork of nss_ldap with sasl support

LICENSE=	# pet portlint

OPTIONS_SLAVE+=	SASL

SLAVE_PORT=	sasl # In case we come up with more
MASTERDIR=	${.CURDIR}/../nss-pam-ldapd

.include "${MASTERDIR}/Makefile"
