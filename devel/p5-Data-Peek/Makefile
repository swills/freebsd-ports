# Created by: Wen Heping <wen@FreeBSD.org>
# $FreeBSD: head/devel/p5-Data-Peek/Makefile 446679 2017-07-26 18:20:30Z sunpoet $

PORTNAME=	Data-Peek
PORTVERSION=	0.47
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Collection of low-level debug facilities

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

TEST_DEPENDS=	p5-Test-NoWarnings>=0:devel/p5-Test-NoWarnings

USES=		perl5 tar:tgz
USE_PERL5=	configure

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/Data/Peek/Peek.so

.include <bsd.port.mk>
