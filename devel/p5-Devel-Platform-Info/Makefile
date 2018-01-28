# Created by: James E Keenan <jkeenan@cpan.org>
# $FreeBSD: head/devel/p5-Devel-Platform-Info/Makefile 459891 2018-01-24 21:35:21Z skreuzer $

PORTNAME=	Devel-Platform-Info
PORTVERSION=	0.16
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	jkeenan@cpan.org
COMMENT=	Unified framework for obtaining common platform metadata

LICENSE=	ART20

USES=		perl5
USE_PERL5=	configure

OPTIONS_DEFINE=	DOCS

PORTDOCS=	Changes README

.include <bsd.port.options.mk>

post-install:
	${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S|^|${WRKSRC}/|} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
