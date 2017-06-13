# Created by: gahr
# $FreeBSD: head/mail/opensmtpd-extras-table-sqlite/Makefile 434427 2017-02-20 02:57:04Z jbeich $

PKGNAMESUFFIX=	-table-sqlite
PORTREVISION=	2

COMMENT=	SQLite table support for OpenSMTPD

PLIST_FILES=	libexec/opensmtpd/table-sqlite \
		man/man5/table-sqlite.5.gz

CONFIGURE_ARGS+=	--with-table-sqlite

USES=		sqlite pkgconfig

MASTERDIR=	${.CURDIR}/../opensmtpd-extras
SLAVE_PORT=	yes

.include "${MASTERDIR}/Makefile"
