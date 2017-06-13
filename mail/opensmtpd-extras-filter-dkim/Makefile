# Created by: Adam Weinberger <adamw@FreeBSD.org>
# $FreeBSD: head/mail/opensmtpd-extras-filter-dkim/Makefile 434427 2017-02-20 02:57:04Z jbeich $

PKGNAMESUFFIX=		-filter-dkim
PORTREVISION=		2

COMMENT=		DKIM-signing filter for OpenSMTPD

PLIST_FILES=		libexec/opensmtpd/filter-dkim-signer \
			man/man8/filter-dkim-signer.8.gz

CONFIGURE_ARGS+=	--with-experimental-filter-dkim-signer

MASTERDIR=		${.CURDIR}/../opensmtpd-extras
SLAVE_PORT=		yes

.include "${MASTERDIR}/Makefile"
