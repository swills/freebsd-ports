# Created by: Lars Eggert <lars.eggert@gmx.net>
# $FreeBSD: head/multimedia/p5-MP4-Info/Makefile 451489 2017-10-08 06:17:27Z sunpoet $

PORTNAME=	MP4-Info
PORTVERSION=	1.13
PORTREVISION=	2
CATEGORIES=	multimedia perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Fetch info from MPEG-4 files

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-IO-String>=0:devel/p5-IO-String
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
