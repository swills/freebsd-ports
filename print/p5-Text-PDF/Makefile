# Created by: Anton Berezin <tobez@tobez.org>
# $FreeBSD: head/print/p5-Text-PDF/Makefile 480794 2018-09-27 09:08:30Z amdmi3 $

PORTNAME=	Text-PDF
PORTVERSION=	0.29a
PORTREVISION=	3
CATEGORIES=	print perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	PDF manipulation module

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

WRKSRC=		${WRKDIR}/${DISTNAME:C/a$//}

USES=		perl5
USE_PERL5=	configure
NO_ARCH=	yes

post-patch:
	@${RM} ${WRKSRC}/pm_to_blib

post-install:
	@${MKDIR} ${STAGEDIR}${PREFIX}/${SITE_PERL_REL}/Text/PDF/examples
	${INSTALL_DATA} ${WRKSRC}/examples/* ${STAGEDIR}${PREFIX}/${SITE_PERL_REL}/Text/PDF/examples

.include <bsd.port.mk>
