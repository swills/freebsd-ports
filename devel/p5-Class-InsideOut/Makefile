# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: head/devel/p5-Class-InsideOut/Makefile 437596 2017-04-03 07:42:39Z sunpoet $

PORTNAME=	Class-InsideOut
PORTVERSION=	1.14
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Safe, simple inside-out object construction kit

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	p5-Class-ISA>=0:devel/p5-Class-ISA
RUN_DEPENDS:=	${BUILD_DEPENDS}

PORTSCOUT=	skipv:1.0301

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
