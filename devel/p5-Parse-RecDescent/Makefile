# Created by: Jerry Hicks <wghicks@bellsouth.net>
# $FreeBSD: head/devel/p5-Parse-RecDescent/Makefile 449893 2017-09-15 08:58:46Z mat $

PORTNAME=	Parse-RecDescent
PORTVERSION=	1.967.009
PORTREVISION=	2
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-
DISTNAME=	${PORTNAME}-${PORTVERSION:R}${PORTVERSION:E}

MAINTAINER=	tobez@FreeBSD.org
COMMENT=	Recursive descent parsing framework for Perl

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

TEST_DEPENDS=	p5-Test-Warn>=0:devel/p5-Test-Warn

OPTIONS_DEFINE=	DOCS

USES=		perl5
USE_PERL5=	configure
NO_ARCH=	yes

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}/tutorial
	${INSTALL_DATA} ${WRKSRC}/tutorial/* ${STAGEDIR}${DOCSDIR}/tutorial

.include <bsd.port.mk>
