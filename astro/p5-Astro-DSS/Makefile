# Created by: ijliao
# $FreeBSD: head/astro/p5-Astro-DSS/Makefile 451685 2017-10-10 11:20:29Z sunpoet $

PORTNAME=	Astro-DSS
PORTVERSION=	1.6.1
PORTREVISION=	1
CATEGORIES=	astro perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	OO interface to the 1st and 2nd Digital Sky Surveys

LICENSE=	GPLv2+

BUILD_DEPENDS=	p5-libwww>=0:www/p5-libwww
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
