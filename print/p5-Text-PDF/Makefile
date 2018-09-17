# Created by: Anton Berezin <tobez@tobez.org>
# $FreeBSD: head/print/p5-Text-PDF/Makefile 479390 2018-09-10 11:16:59Z des $

PORTNAME=	Text-PDF
PORTVERSION=	0.29a
PORTREVISION=	3
CATEGORIES=	print perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	PDF manipulation module

WRKSRC=		${WRKDIR}/${DISTNAME:C/a$//}

USES=		perl5
USE_PERL5=	configure

post-patch:
	@${RM} ${WRKSRC}/pm_to_blib

post-install:
	@${MKDIR} ${STAGEDIR}${PREFIX}/${SITE_PERL_REL}/Text/PDF/examples
	@${INSTALL_DATA} ${WRKSRC}/examples/* ${STAGEDIR}${PREFIX}/${SITE_PERL_REL}/Text/PDF/examples

.include <bsd.port.mk>
