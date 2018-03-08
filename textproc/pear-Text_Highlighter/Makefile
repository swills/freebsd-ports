# Created by: Martin Wilke <miwi@FreeBSD.org>
# $FreeBSD: head/textproc/pear-Text_Highlighter/Makefile 463917 2018-03-08 19:48:41Z mat $

PORTNAME=	Text_Highlighter
PORTVERSION=	0.8.0
CATEGORIES=	textproc pear

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	PEAR Syntax highlighting

LICENSE=	PHP301

BUILD_DEPENDS=	${PEARDIR}/XML/Parser.php:devel/pear-XML_Parser@${PHP_FLAVOR}
RUN_DEPENDS=	${PEARDIR}/XML/Parser.php:devel/pear-XML_Parser@${PHP_FLAVOR}

USES=		pear
NO_ARCH=	yes

.include <bsd.port.mk>
