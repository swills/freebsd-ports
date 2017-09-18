# Created by: Anes Mukhametov <anes@anes.su>
# $FreeBSD: head/graphics/p5-Image-ObjectDetect/Makefile 449893 2017-09-15 08:58:46Z mat $

PORTNAME=	Image-ObjectDetect
PORTVERSION=	0.12
PORTREVISION=	4
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
