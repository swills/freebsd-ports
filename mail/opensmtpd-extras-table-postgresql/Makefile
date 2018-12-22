# Created by: gahr
# $FreeBSD: head/mail/opensmtpd-extras-table-postgresql/Makefile 487272 2018-12-12 01:35:33Z gerald $

PKGNAMESUFFIX=	-table-postgresql
PORTREVISION=	3

COMMENT=	PostgreSQL table support for OpenSMTPD

PLIST_FILES=	libexec/opensmtpd/table-postgres

CONFIGURE_ARGS+=	--with-table-postgres

USES=		pgsql

MASTERDIR=	${.CURDIR}/../opensmtpd-extras
SLAVE_PORT=	yes

.include "${MASTERDIR}/Makefile"
