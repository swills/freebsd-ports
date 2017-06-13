# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: head/devel/p5-TheSchwartz/Makefile 435920 2017-03-11 15:58:50Z sunpoet $

PORTNAME=	TheSchwartz
PORTVERSION=	1.12
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:JFEARN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Reliable job queue

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Data-ObjectDriver>=0.04:devel/p5-Data-ObjectDriver
RUN_DEPENDS:=	${BUILD_DEPENDS}

OPTIONS_DEFINE=	DOCS

NO_ARCH=	yes
USES=		perl5 shebangfix
USE_PERL5=	modbuild
SHEBANG_FILES=	extras/check_schwartz extras/thetop

PORTDOCS=	*

post-install:
	${INSTALL_SCRIPT} ${WRKSRC}/extras/check_schwartz ${WRKSRC}/extras/thetop ${STAGEDIR}${PREFIX}/bin/

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/doc/* ${STAGEDIR}${DOCSDIR}/

.include <bsd.port.mk>
