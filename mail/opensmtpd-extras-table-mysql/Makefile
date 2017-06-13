# Created by: gahr
# $FreeBSD: head/mail/opensmtpd-extras-table-mysql/Makefile 434427 2017-02-20 02:57:04Z jbeich $

PKGNAMESUFFIX=	-table-mysql
PORTREVISION=	2

COMMENT=	MySQL table support for OpenSMTPD

PLIST_FILES=	libexec/opensmtpd/table-mysql

CONFIGURE_ARGS+=	--with-table-mysql
CFLAGS+=	-I${LOCALBASE}/include/mysql
LDFLAGS+=	-L${LOCALBASE}/lib/mysql

USES=		mysql

MASTERDIR=	${.CURDIR}/../opensmtpd-extras
SLAVE_PORT=	yes

.include "${MASTERDIR}/Makefile"
