# Created by: Anes Mukhametov <anes@anes.su>
# $FreeBSD: head/graphics/p5-Image-ObjectDetect/Makefile 438490 2017-04-14 05:30:25Z jbeich $

PORTNAME=	Image-ObjectDetect
PORTVERSION=	0.12
PORTREVISION=	4
CATEGORIES=	graphics perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	anes@anes.su
COMMENT=	Detects objects from picture using opencv

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	${LOCALBASE}/libdata/pkgconfig/opencv.pc:graphics/opencv
RUN_DEPENDS:=	${BUILD_DEPENDS}

USE_PERL5=	configure
USES=		perl5 pkgconfig

.include <bsd.port.mk>
