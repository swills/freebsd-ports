# Created by: Ying-Chieh Chen
# $FreeBSD: head/devel/p5-Devel-LexAlias/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	Devel-LexAlias
PORTVERSION=	0.05
PORTREVISION=	2
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl module which does alias lexical variables

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Devel-Caller>=0.03:devel/p5-Devel-Caller
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/Devel/LexAlias/LexAlias.so

.include <bsd.port.mk>
