# Created by: Adam Weinberger <adamw@FreeBSD.org>
# $FreeBSD: head/mail/opensmtpd-extras-filter-regex/Makefile 434427 2017-02-20 02:57:04Z jbeich $

PKGNAMESUFFIX=		-filter-regex
PORTREVISION=		2

COMMENT=		Regular expression filter for OpenSMTPD

CONFIGURE_ARGS+=	--with-experimental-filter-regex

PLIST=			${.CURDIR}/pkg-plist
MASTERDIR=		${.CURDIR}/../opensmtpd-extras
SLAVE_PORT=		yes

post-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/etc/mail
	${INSTALL_DATA} ${WRKSRC}/extras/filters/filter-regex/filter-regex.conf \
		${STAGEDIR}${PREFIX}/etc/mail/filter-regex.conf.sample

.include "${MASTERDIR}/Makefile"
