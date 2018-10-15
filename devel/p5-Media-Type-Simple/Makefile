# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/devel/p5-Media-Type-Simple/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	Media-Type-Simple
PORTVERSION=	0.31.0
DISTVERSIONPREFIX=	v
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:RRWO
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	MIME Media Types and their file extensions

LICENSE=	ART20

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Exporter-Lite>=0:devel/p5-Exporter-Lite \
		p5-File-Share>=0:devel/p5-File-Share \
		p5-File-ShareDir>=0:devel/p5-File-ShareDir

NO_ARCH=	yes
USE_PERL5=	configure
USES=		perl5

.include <bsd.port.mk>
