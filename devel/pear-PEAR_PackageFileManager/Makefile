# Created by: Antonio Carlos Venancio Junior (<antonio@inf.ufsc.br>)
# $FreeBSD: head/devel/pear-PEAR_PackageFileManager/Makefile 463917 2018-03-08 19:48:41Z mat $

PORTNAME=	PEAR_PackageFileManager
PORTVERSION=	1.7.2
CATEGORIES=	devel www pear

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	PEAR class to maintain PEAR packages

OPTIONS_DEFINE=	PEAR_PHP_COMPATINFO PEAR_XML_TREE
PEAR_PHP_COMPATINFO_DESC=	PEAR::PHP_CompatInfo support
PEAR_XML_TREE_DESC=	PEAR::XML_Tree support

USES=	pear

PEAR_PHP_COMPATINFO_RUN_DEPENDS=	${PEARDIR}/PHP/CompatInfo.php:devel/pear-PHP_CompatInfo@${PHP_FLAVOR}
PEAR_XML_TREE_RUN_DEPENDS=	${PEARDIR}/XML/Tree.php:devel/pear-XML_Tree@${PHP_FLAVOR}

.include <bsd.port.mk>
