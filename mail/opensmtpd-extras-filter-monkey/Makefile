# Created by: fluffy
# $FreeBSD: head/mail/opensmtpd-extras-filter-monkey/Makefile 434427 2017-02-20 02:57:04Z jbeich $

PKGNAMESUFFIX=		-filter-monkey
PORTREVISION=		2

COMMENT=		Arbitrary delay or reject filter for OpenSMTPD

CONFIGURE_ARGS+=	--with-experimental-filter-monkey

PLIST=			${.CURDIR}/pkg-plist
MASTERDIR=		${.CURDIR}/../opensmtpd-extras
SLAVE_PORT=		yes

post-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/etc/mail
	${INSTALL_DATA} ${WRKSRC}/extras/filters/filter-monkey/filter-monkey.conf \
		${STAGEDIR}${PREFIX}/etc/mail/filter-monkey.conf.sample

.include "${MASTERDIR}/Makefile"
