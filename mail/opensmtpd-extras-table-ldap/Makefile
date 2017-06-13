# Created by: fluffy
# $FreeBSD: head/mail/opensmtpd-extras-table-ldap/Makefile 434427 2017-02-20 02:57:04Z jbeich $

PKGNAMESUFFIX=		-table-ldap
PORTREVISION=		2

COMMENT=		LDAP table support for OpenSMTPD

PLIST_FILES=		libexec/opensmtpd/table-ldap

CONFIGURE_ARGS+=	--with-table-ldap

USE_OPENLDAP=		client

MASTERDIR=		${.CURDIR}/../opensmtpd-extras
SLAVE_PORT=		yes

.include "${MASTERDIR}/Makefile"
