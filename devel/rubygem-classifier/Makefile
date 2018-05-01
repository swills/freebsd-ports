# Created by: Peter Schuller <peter.schuller@infidyne.com>
# $FreeBSD: head/devel/rubygem-classifier/Makefile 467998 2018-04-22 08:56:43Z sunpoet $

PORTNAME=	classifier
PORTVERSION=	1.3.5
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Classifier module for Bayesian and other types of classifications

LICENSE=	LGPL21
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	rubygem-fast-stemmer>=1.0.0:devel/rubygem-fast-stemmer \
		rubygem-mathn>=0:math/rubygem-mathn \
		rubygem-rake>=0:devel/rubygem-rake

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
