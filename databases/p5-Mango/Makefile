# Created by: Adam Weinberger <adamw@FreeBSD.org>
# $FreeBSD: head/databases/p5-Mango/Makefile 417880 2016-07-01 14:26:48Z mat $

PORTNAME=	Mango
PORTVERSION=	1.29
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:ODC
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Pure-Perl non-blocking I/O MongoDB driver

LICENSE=	ART20
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	mongo:databases/mongodb \
		p5-Mojolicious>=5.40:www/p5-Mojolicious
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
