# Created by: Alexey V. Degtyarev <alexey@renatasystems.org>
# $FreeBSD: head/net/ldap-stats/Makefile 444410 2017-06-26 19:37:51Z sunpoet $

PORTNAME=	ldap-stats
PORTVERSION=	5.2
PORTREVISION=	1
CATEGORIES=	net
MASTER_SITES=	ftp://ftp.renatasystems.org/pub/FreeBSD/ports/distfiles/

MAINTAINER=	alexey@renatasystems.org
COMMENT=	Program to generate OpenLDAP statistics reports

NO_ARCH=	yes
NO_BUILD=	yes
USES=		perl5

PLIST_FILES=	bin/ldap-stats

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/ldap-stats.pl \
		${STAGEDIR}${PREFIX}/bin/ldap-stats

.include <bsd.port.mk>
