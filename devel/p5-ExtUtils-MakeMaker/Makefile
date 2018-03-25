# Created by: Michael Johnson <ahze@ahze.net>
# $FreeBSD: head/devel/p5-ExtUtils-MakeMaker/Makefile 465017 2018-03-19 15:14:12Z sunpoet $

PORTNAME=	ExtUtils-MakeMaker
PORTVERSION=	7.34
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Designed to write a Makefile for an extension module

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
CONFLICTS=	p5-ExtUtils-Command-[0-9]*

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

post-patch:
	@${REINPLACE_CMD} -e '/EXE_FILES/d; /my::bundles/d' ${WRKSRC}/Makefile.PL
	@${REINPLACE_CMD} -e '/^bundled\//d' ${WRKSRC}/MANIFEST
	@${RM} -r ${WRKSRC}/bundled/

.include <bsd.port.mk>
