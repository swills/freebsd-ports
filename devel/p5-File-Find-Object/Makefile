# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: head/devel/p5-File-Find-Object/Makefile 431526 2017-01-15 04:17:58Z sunpoet $

PORTNAME=	File-Find-Object
PORTVERSION=	0.3.2
DISTVERSIONPREFIX=v
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Object oriented File::Find replacement

LICENSE=	ART20
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	p5-Class-XSAccessor>=0:devel/p5-Class-XSAccessor
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
