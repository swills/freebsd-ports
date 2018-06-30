# Created by: Anton Berezin <tobez@FreeBSD.org>
# $FreeBSD: head/devel/p5-File-ShareDir/Makefile 473264 2018-06-24 20:20:33Z sunpoet $

PORTNAME=	File-ShareDir
PORTVERSION=	1.114
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Locate per-dist and per-module shared files

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	p5-Class-Inspector>=1.12:devel/p5-Class-Inspector
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure
NO_ARCH=	yes

.include <bsd.port.mk>
