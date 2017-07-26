# Created by: brix@FreeBSD.org
# $FreeBSD: head/devel/p5-Scalar-String/Makefile 446530 2017-07-24 15:59:36Z sunpoet $

PORTNAME=	Scalar-String
PORTVERSION=	0.003
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	String aspects of scalars

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

USE_PERL5=	modbuild
USES=		perl5

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/Scalar/String/String.so

.include <bsd.port.mk>
