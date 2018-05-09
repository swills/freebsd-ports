# Created by: Anes Mukhametov <anes@anes.su>
# $FreeBSD: head/graphics/p5-Image-ObjectDetect/Makefile 469421 2018-05-09 01:44:50Z swills $

PORTNAME=	Image-ObjectDetect
PORTVERSION=	0.12
PORTREVISION=	5
CATEGORIES=	graphics perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	anes@anes.su
COMMENT=	Detects objects from picture using opencv

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${LOCALBASE}/libdata/pkgconfig/opencv.pc:graphics/opencv
RUN_DEPENDS:=	${BUILD_DEPENDS}

USE_PERL5=	configure
USES=		perl5 pkgconfig

.include <bsd.port.mk>
