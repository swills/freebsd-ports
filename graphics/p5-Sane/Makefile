# Created by: chinsan
# $FreeBSD: head/graphics/p5-Sane/Makefile 471642 2018-06-04 18:08:48Z sunpoet $

PORTNAME=	Sane
PORTVERSION=	0.05
PORTREVISION=	1
CATEGORIES=	graphics perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl extension for the SANE (Scanner Access Now Easy) Project

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-ExtUtils-Depends>=0:devel/p5-ExtUtils-Depends \
		p5-ExtUtils-PkgConfig>=0:devel/p5-ExtUtils-PkgConfig \
		sane-config:graphics/sane-backends

USES=		perl5
USE_PERL5=	configure

post-patch:
	@${REINPLACE_CMD} -e '/^my $$inc = / s|-I\.|& -I${LOCALBASE}/include|' ${WRKSRC}/Makefile.PL

.include <bsd.port.mk>
