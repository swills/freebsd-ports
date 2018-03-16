# Created by: Christopher N. Harrell <cnh@ivmg.net>
# $FreeBSD: head/net-mgmt/p5-NetAddr-IP/Makefile 464568 2018-03-15 07:44:07Z tobik $

PORTNAME=	NetAddr-IP
PORTVERSION=	4.079
CATEGORIES=	net-mgmt perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	tobez@FreeBSD.org
COMMENT=	Work with IPv4 and IPv6 addresses and subnets

LICENSE=	ART10 GPLv2
LICENSE_COMB=	dual
LICENSE_FILE_ART10=	${WRKSRC}/Artistic
LICENSE_FILE_GPLv2=	${WRKSRC}/Copying

USES=		perl5
USE_PERL5=	configure

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/NetAddr/IP/Util/Util.so

.include <bsd.port.mk>
