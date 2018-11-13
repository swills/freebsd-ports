# Created by: Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/devel/rubygem-tty-prompt/Makefile 483930 2018-11-03 22:18:13Z sunpoet $

PORTNAME=	tty-prompt
PORTVERSION=	0.17.2
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Beautiful and powerful interactive command line prompt

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	rubygem-necromancer>=0.4.0:devel/rubygem-necromancer \
		rubygem-pastel>=0.7.0:devel/rubygem-pastel \
		rubygem-timers>=4.0:devel/rubygem-timers \
		rubygem-tty-cursor>=0.6.0:devel/rubygem-tty-cursor \
		rubygem-tty-reader>=0.4.0:devel/rubygem-tty-reader

USES=		gem
USE_RUBY=	yes

NO_ARCH=	yes

.include <bsd.port.mk>
