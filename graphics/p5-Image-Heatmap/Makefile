# Created by: Steven Kreuzer <skreuzer@FreeBSD.org>
# $FreeBSD: head/graphics/p5-Image-Heatmap/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	Image-Heatmap
PORTVERSION=	0.565
PORTREVISION=	2
CATEGORIES=	graphics perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	skreuzer@FreeBSD.org
COMMENT=	Convert geographic coordinates into a graphical heatmap

LICENSE=	ART20 GPLv1
LICENSE_COMB=	dual

RUN_DEPENDS=	convert:graphics/ImageMagick

WRKSRC=	${WRKDIR}/${PORTNAME}
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
