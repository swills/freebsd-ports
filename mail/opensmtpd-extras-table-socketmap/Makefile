# Created by: gahr
# $FreeBSD: head/mail/opensmtpd-extras-table-socketmap/Makefile 434427 2017-02-20 02:57:04Z jbeich $

PKGNAMESUFFIX=	-table-socketmap
PORTREVISION=	2

COMMENT=	Socketmap table support for OpenSMTPD

PLIST_FILES=	libexec/opensmtpd/table-socketmap \
		man/man5/table-socketmap.5.gz

CONFIGURE_ARGS+=	--with-table-socketmap

MASTERDIR=	${.CURDIR}/../opensmtpd-extras
SLAVE_PORT=	yes

.include "${MASTERDIR}/Makefile"
