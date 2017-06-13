# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/net/p5-Socket/Makefile 425553 2016-11-06 16:50:42Z sunpoet $

PORTNAME=	Socket
PORTVERSION=	2.024
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:PEVANS
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Networking constants and support functions

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

PORTSCOUT=	limit:^[0-9\.]*$$

USE_PERL5=	configure
USES=		perl5

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/Socket/Socket.so

.include <bsd.port.mk>
