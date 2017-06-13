# Created by: Michael Johnson <ahze@ahze.net>
# $FreeBSD: head/devel/p5-ExtUtils-MakeMaker/Makefile 443457 2017-06-12 19:02:02Z sunpoet $

PORTNAME=	ExtUtils-MakeMaker
PORTVERSION=	7.30
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Designed to write a Makefile for an extension module

LICENSE=	ART10 GPLv1
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
