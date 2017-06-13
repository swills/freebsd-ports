# Created by: fluffy
# $FreeBSD: head/mail/opensmtpd-extras-scheduler-ram/Makefile 434427 2017-02-20 02:57:04Z jbeich $

PKGNAMESUFFIX=		-scheduler-ram
PORTREVISION=		2

COMMENT=		RAM scheduler support for OpenSMTPD

PLIST_FILES=		libexec/opensmtpd/scheduler-ram

CONFIGURE_ARGS+=	--with-scheduler-ram

MASTERDIR=		${.CURDIR}/../opensmtpd-extras
SLAVE_PORT=		yes

.include "${MASTERDIR}/Makefile"
