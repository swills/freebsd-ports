# Created by: Adam Weinberger <adamw@FreeBSD.org>
# $FreeBSD: head/mail/opensmtpd-extras-filter-clamav/Makefile 434427 2017-02-20 02:57:04Z jbeich $

PKGNAMESUFFIX=		-filter-clamav
PORTREVISION=		2

COMMENT=		Check messages with ClamAV in OpenSMTPD

RUN_DEPENDS=		clamscan:security/clamav

PLIST_FILES=		libexec/opensmtpd/filter-clamav \
			man/man8/filter-clamav.8.gz

CONFIGURE_ARGS+=	--with-experimental-filter-clamav

MASTERDIR=		${.CURDIR}/../opensmtpd-extras
SLAVE_PORT=		yes

.include "${MASTERDIR}/Makefile"
