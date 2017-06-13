# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/devel/p5-B-Hooks-OP-Annotation/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	B-Hooks-OP-Annotation
PORTVERSION=	0.44
PORTREVISION=	2
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Annotate and delegate hooked OPs

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-ExtUtils-Depends>=0.304:devel/p5-ExtUtils-Depends
RUN_DEPENDS:=	${BUILD_DEPENDS}

USE_PERL5=	configure
USES=		perl5

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/B/Hooks/OP/Annotation/Annotation.so

.include <bsd.port.mk>
