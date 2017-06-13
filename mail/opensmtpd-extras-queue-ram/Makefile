# Created by: fluffy
# $FreeBSD: head/mail/opensmtpd-extras-queue-ram/Makefile 434427 2017-02-20 02:57:04Z jbeich $

PKGNAMESUFFIX=		-queue-ram
PORTREVISION=		2

COMMENT=		RAM queue support for OpenSMTPD

PLIST_FILES=		libexec/opensmtpd/queue-ram

CONFIGURE_ARGS+=	--with-queue-ram

MASTERDIR=		${.CURDIR}/../opensmtpd-extras
SLAVE_PORT=		yes

.include "${MASTERDIR}/Makefile"
