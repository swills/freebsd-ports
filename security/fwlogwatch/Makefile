# Created by: ijliao
# $FreeBSD: head/security/fwlogwatch/Makefile 430235 2017-01-01 03:45:12Z sunpoet $

PORTNAME=	fwlogwatch
PORTVERSION=	1.5
CATEGORIES=	security
MASTER_SITES=	http://fwlogwatch.inside-security.de/sw/

MAINTAINER=	cy@FreeBSD.org
COMMENT=	Packet filter and firewall log analyzer

USES=		gettext tar:bzip2
MAKE_ENV=	MKDIR="${MKDIR}"
INSTALL_TARGET=	install install-config install-i18n

post-patch:
	@${REINPLACE_CMD} -e "s,/etc,${PREFIX}/etc,g" ${WRKSRC}/fwlogwatch.8

post-install:
	${INSTALL_SCRIPT} ${FILESDIR}/fwlogwatch.sh.sample \
		${STAGEDIR}${PREFIX}/etc/rc.d

.include <bsd.port.mk>
