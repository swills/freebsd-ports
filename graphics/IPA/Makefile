# Created by: ijliao
# $FreeBSD: head/graphics/IPA/Makefile 465826 2018-03-28 17:14:27Z mat $

PORTNAME=	IPA
PORTVERSION=	1.08
PORTREVISION=	2
CATEGORIES=	graphics
MASTER_SITES=	http://www.prima.eu.org/IPA/ CPAN/Prima/KARASIK

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Image Processing Algorithms

RUN_DEPENDS=	p5-Prima>1.24:x11-toolkits/p5-Prima
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure
INSTALL_TARGET=	pure_install
MAKE_JOBS_UNSAFE=	yes

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/IPA/IPA.so

.include <bsd.port.pre.mk>

.if ${PERL_LEVEL} >= 502600
BROKEN=		Does not build
.endif

.include <bsd.port.post.mk>
